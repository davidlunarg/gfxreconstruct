#!/usr/bin/python3 -i
#
# Copyright (c) 2018-2020 Valve Corporation
# Copyright (c) 2018-2024 LunarG, Inc.
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to
# deal in the Software without restriction, including without limitation the
# rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
# sell copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
# IN THE SOFTWARE.

# TODO: This was ported from replay consumer. There's lots of extra code here
# that is specific to the replay consumer that should be removed.

from khronos_base_generator import write

class KhronosReplayFrameLoopConsumerBaseBodyGenerator():
    """Base class for generating replay cousumers body code."""

    def get_parent_id(self, api_data, value, values):
        """Get the ID of the parent object when creating a handle.  The instance type is does not have a parent object."""
        if value.base_type != api_data.instance_type:
            return values[0].name
        return 'format::kNullHandleId'

    def is_pool_allocation(self, command):
        """Method may be overriden. """
        return False

    def get_pool_allocation_type(self, value):
        """Method may be overriden. """
        return None

    def check_skip_extended_struct_handling(self, struct, struct_type):
        """Method may be overriden. """
        return False

    def generate_custom_extended_struct_handling(self, struct, struct_type):
        """ Method may be overriden.
            None implies no customization
        """

        return None

    def make_replay_frame_loop_consumer_func_body(self, api_data, return_type, name, values):
        """
        Method override.
        Return ReplayFrameLoopConsumerBase class member function definition.
        """
        body = ''

        if name in self.REPLAY_FRAME_LOOP_RESOURCE_ALLOCATE_OVERRIDES:
           body += '    // Return if not the first time through loop\n'
           body += '    if (frame_loop_info_.IsRepetition())\n'
        else:
           # name in self.REPLAY_FRAME_LOOP_RESOURCE_FREE_OVERRIDES:
           body += '    // Return for all loop iterations\n'
           body += '    if (frame_loop_info_.IsLooping())\n'

        body += '    {\n'
        body += '        return;\n'
        body += '    }\n'
        # Output a function call to replay consumer
        body += '    VulkanReplayConsumer::Process_'+name+'('
        args=['call_info']
        if return_type != 'void':
            args.append('returnValue')
        [ args.append(value.name) for value in values ]
        body += ", ".join(args) + ');\n'
        return body

    def generate_replay_frame_loop_consumer_content(self, api_data):
        """Performs C++ code generation for the replay frame loop consumer."""
        platform_type = api_data.api_class_prefix

        self.newline()

        for cmd in self.get_all_filtered_cmd_names():

            if ((cmd not in self.REPLAY_FRAME_LOOP_RESOURCE_ALLOCATE_OVERRIDES) and
                (cmd not in self.REPLAY_FRAME_LOOP_RESOURCE_FREE_OVERRIDES)
            ):
                continue

            # TODO: Remove??
            if self.is_resource_dump_class(
            ) and self.is_dump_resources_api_call(cmd) == False:
                continue

            info = self.all_cmd_params[cmd]
            return_type = info[0]
            values = info[2]

            cmddef = '\n'
            if self.is_resource_dump_class():
                cmddef += self.make_dump_resources_func_decl(
                    return_type,
                    '{}ReplayDumpResources::Process_'.format(platform_type)
                    + cmd, values, cmd in self.DUMP_RESOURCES_OVERRIDES, cmd in self.DUMP_RESOURCES_TRANSFER_API_CALLS
                ) + '\n'
            else:
                cmddef += self.make_consumer_func_decl(
                    return_type,
                    '{}ReplayFrameLoopConsumerBase::Process_'.format(platform_type) + cmd,
                    values
                ) + '\n'
            cmddef += '{\n'
            cmddef += self.make_replay_frame_loop_consumer_func_body(api_data, return_type, cmd, values)
            cmddef += '}'

            write(cmddef, file=self.outFile)

    def needs_remove_handle_expression(self, command):
        """ Method may be overridden. """
        api_data = self.get_api_data()
        if (
            command.startswith(api_data.command_prefix)
            and command[len(api_data.command_prefix):].startswith('Destroy')
        ):
            return True
        return False

    # TODO: Should probably remove this... but it's still referenced elsewere...
    def determine_handle_to_remove_value(self, command, values):
        """Method may be overridden."""
        if self.is_core_destroy_command(command):
            return values[0]
        else:
            return values[1]

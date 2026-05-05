#!/usr/bin/python3 -i
#
# Copyright (c) 2018 Valve Corporation
# Copyright (c) 2018-2025 LunarG, Inc.
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

import sys
from khronos_base_generator import write


class KhronosFrameLoopConsumerBaseHeaderGenerator():
    """KhronosConsumerBHeaderGenerator  TODO:... Fixt this
    Generates C++ member declarations for the appropriate consumer class responsible
    for processing the current Khronos API call parameter data.
    """

    # TODO: Rename this func, naming is inverted.
    def skip_generating_command(self, command):
        """ Method may be overridden. """
        # TODO: May also want to check the other flavor of overrides
        return ((command in self.REPLAY_FRAME_LOOP_RESOURCE_ALLOCATE_OVERRIDES) or
                (command in self.REPLAY_FRAME_LOOP_RESOURCE_FREE_OVERRIDES))

    def write_class_setup(self, class_name, constructor_args):
        write(
            'class {class_name} : public VulkanReplayConsumer'.format(
                class_name=class_name
            ),
            file=self.outFile
        )
        write('{', file=self.outFile)
        write('  public:', file=self.outFile)
        if constructor_args:
            arg_list = ', '.join(
                [arg.split(' ')[-1] for arg in constructor_args.split(',')]
            )
            # KLUDGES:
            # We remove the last arg in call to VulkanReplayConsumer ctor.
            # frame_loop_info_ initialize is hardcoded.
            arg_list=arg_list.rpartition(",")[0]
            write(
                '    {class_name}({}) :\n        VulkanReplayConsumer({}),'.format(
                    constructor_args, arg_list, class_name=class_name
                ),
                file=self.outFile
            )
            write(
                '        frame_loop_info_(frame_loop_info) { }\n', file=self.outFile)
        else:
            write('    {}() {{ }}\n'.format(class_name), file=self.outFile)
        write(
            '    virtual ~{}() override {{ }}'.format(class_name),
            file=self.outFile
        )

    def write_class_completion(self):
        write("  protected:\n", file=self.outFile)
        write("    graphics::FrameLoopInfo& frame_loop_info_;\n", file=self.outFile)
        write('};', file=self.outFile)

    def write_class_contents(self):
        """Method may be overridden."""
        for cmd in self.get_all_filtered_cmd_names():
            # TODO: this check is backwards, rename this func
            if not self.skip_generating_command(cmd):
                continue

            info = self.all_cmd_params[cmd]
            return_type = info[0]
            values = info[2]

            decl = self.make_consumer_func_decl(
                return_type, 'Process_' + cmd, values
            )

            cmddef = '\n'
            # TODO: Should is_override even be checked?
            if self.genOpts.is_override:
                cmddef += self.indent(
                    decl + ';', self.INDENT_SIZE
                )
            else:
                # TODO: Can this be removed?
                cmddef += self.indent(
                    decl + ' {}', self.INDENT_SIZE
                )

            write(cmddef, file=self.outFile)

    def output_header_contents(self, class_name, constructor_args):
        self.write_class_setup(class_name, constructor_args)
        self.write_class_contents()
        self.write_class_completion()

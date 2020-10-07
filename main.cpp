#include <stdio.h>
#include <iostream>
#include <cstdint>
#include <assert.h>

#include "Instruction.h"

int main() {
	Instruction i = Instruction(0x4bd63000);
	assert(i.opcode() == Opcode::MOVI);
}

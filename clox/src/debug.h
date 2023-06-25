#ifndef DEBUG_H_
#define DEBUG_H_

#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif // DEBUG_H_

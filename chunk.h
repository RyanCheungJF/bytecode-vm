#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"

typedef enum
{
    OP_RETURN, // return from current function
} OpCode;

/**
 * our own dynamic array, essentially linked list
 */
typedef struct
{
    int count;     // no. of entries actually in use
    int capacity;  // no. of entries
    uint8_t *code; // pointer to byte or 8 bits, used to allocate space into our dynamic array
} Chunk;

void initChunk(Chunk *chunk);

void freeChunk(Chunk *chunk);

void writeChunk(Chunk *chunk, uint8_t byte);

#endif
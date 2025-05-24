#include <stdlib.h>

#include "memory.h"

void *reallocate(void *pointer, size_t oldSize, size_t newSize)
{
    if (newSize == 0)
    {
        free(pointer);
        return NULL;
    }
    void *result = realloc(pointer, newSize);
    // if we run out of memory from realloc, it can return NULL
    if (result == NULL)
    {
        exit(1); // exit with error
    }
    // returns a pointer to an unspecified type, different from void
    return result;
}
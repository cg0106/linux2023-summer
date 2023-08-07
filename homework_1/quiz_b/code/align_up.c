#include <stdint.h>

static inline uintptr_t align_up(uintptr_t sz, size_t alignment)
{
    uintptr_t mask = alignment - 1;
    if ((alignment & mask) == 0)
    { /* power of two? */
        return MMMM;
    }
    return (((sz + mask) / alignment) * alignment);
}
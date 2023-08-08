#include <stdint.h>

/*
 *    2的冪在2進位中 只會有1個BIT的1
 *    2 = 0x0010b  -> 2-1 = 0x0001b
 *    4 = 0x0100b  -> 4-2 = 0x0011b
 *    8 = 0x1000b  -> 8-2 = 0x0111b
 *
 *    和自己的-1 做&運算可以檢查出是不是2的冪
 *
 *    如果是2的冪, align只要把後面的部份去掉就好
 */
static inline uintptr_t align_up(uintptr_t sz, size_t alignment)
{
    uintptr_t mask = alignment - 1;
    if ((alignment & mask) == 0){ /* power of two? */
        return sz & (~mask);
    }
    return (((sz + mask) / alignment) * alignment);
}
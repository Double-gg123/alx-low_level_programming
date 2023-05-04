#include "main.h"

/**
 * get_endianness - checks the endianness of the machine
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
    unsigned int i = 1;
    char *c = (char *)&i;

    /* if the first byte in memory is the least significant byte, the machine
     * is little endian; otherwise, it's big endian */
    if (*c)
        return (1); /* little endian */
    else
        return (0); /* big endian */
}


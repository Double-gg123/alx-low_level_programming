#include "main.h"

/**
 * clear_bit - where index is the index, starting from 0 of the bit
 * @n: an unsigned long int.
 * @index: index .
 *
 * Return:  1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}

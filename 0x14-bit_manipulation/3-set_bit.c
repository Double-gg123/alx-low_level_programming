#include "main.h"

/**
 * set_bit - is the index, starting from 0 of the bit
 * @n: an unsigned long int.
 * @index: index.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}

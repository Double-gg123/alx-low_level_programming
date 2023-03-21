#include <stdio.h>

/**
 *  print_alphabet - Enty point
 *
 *  Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n);
}

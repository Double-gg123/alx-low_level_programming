#include "main.h"
/**
 *print_sign - sign of a number.
 *@n: input.
 *
 *Return: 1 and print + if n > 1
 * 0 and print 0 if n = 0
 * -1 and print - if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}

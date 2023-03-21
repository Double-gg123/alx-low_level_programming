#include "main.h"
/**
 *_isalpha - check for lower case and upper case letters
 *@c: input.
 *
 *Return: 1 if c is lowercase and uppercase
 * 0 if c is anyhting else.
 */
int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include <unistd.h>
#include <string.h>
/**
 * main - Entry point A c program that prints a line to the stndard error
 *
 * Return: 1 (Success)
 */
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}

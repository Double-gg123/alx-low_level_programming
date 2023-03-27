#include "main.h"
/**
 *puts2 - prints very other character in string.
 *@str: pointer to string.
 *
 *Return: void.
 */
void puts2(char *str) {
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    for (int i = 0; i < len; i += 2) {
        putchar(str[i]);
    }
    putchar('\n');
}

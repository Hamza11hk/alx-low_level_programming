#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - reverse a string
 *
 * @s: string to print
 */
void print_rev(char *s)
{
	int x;

	for (x = _strlen(s) - 1; x >= 0; x--)
	{
		_putchar(*(s + x));
	}
	_putchar('\n');
}

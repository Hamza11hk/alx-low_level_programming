#include "main.h"
#include "2-strlen.c"
/**
 * _puts - puts a string
 * @str: sting to print
*/
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}

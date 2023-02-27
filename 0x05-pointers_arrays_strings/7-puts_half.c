#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: hols the string
 */
void puts_half(char *str)
{
	int x;

	for (x = 1; str[x] != '\0'; x++)
		;
	x++;
	for (x = x / 2; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}

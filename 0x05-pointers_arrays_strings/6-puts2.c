#include "main.h"
/**
 *puts2 - print one char out of 2 of a string
 *@str: hold the string
 */
void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (c % 2 == 0)
			_putchar(str[c]);
	}
	_putchar('\n');

}


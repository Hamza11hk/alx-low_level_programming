#include "main.h"
/**
 * string_toupper - Change lowercase letters to uppercase
 * @x: string
 * Return: x
 */
char *string_toupper(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 'a' && x[i] <= 'z')
			x[i] = x[i] - 'a' + 'A';
	}
	return (x);
}

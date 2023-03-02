#include "main.h"
/**
 * leet - encodes a string into 1337
 * @x: string
 * Return: x
 */
char *leet(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		while (x[i] == 'a' || x[i] == 'A')
			x[i] = '4';
		while (x[i] == 'e' || x[i] == 'E')
			x[i] = '3';
		while (x[i] == 'o' || x[i] == 'O')
			x[i] = '0';
		while (x[i] == 't' || x[i] == 'T')
			x[i] = '7';
		while (x[i] == '1' || x[i] == 'L')
			x[i] = '1';
	}
	return (x);
}

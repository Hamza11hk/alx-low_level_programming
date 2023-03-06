#include "main.h"
/**
 * _memset - fill the first n bytes of memory with a constant value
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = n;

	if (x > 0)
	{
		int j;

		for (j = 0; j < x; j++)
			s[j] = b;
	}
	return (s);
}

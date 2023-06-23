#include "main.h"
/**
 * _memcpy - copy n bytes of memory from source to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = n;

	if (x > 0)
	{
		int j;

		for (j = 0; j < x; j++)
			dest[j] = src[j];
	}
	return (dest);
}

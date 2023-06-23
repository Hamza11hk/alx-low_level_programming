#include "main.h"
/**
 * _strncpy - copy a string of dest
 * @dest: destination to copy from
 * @src: source to copy
 * @n: number of places to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	for (; n > x; x++)
		dest[x] = '\0';

	return (dest);
}

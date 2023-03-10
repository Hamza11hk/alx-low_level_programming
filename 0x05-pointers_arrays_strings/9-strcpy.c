#include "main.h"
/**
 *_strcpy - copies the string pointed to by src
 *@src: holds the string
 *@dest: receiving the string
 *Return: returned the string
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != 0; c++)
	{
		dest[c] = src[c];
	}
	dest[c] = src[c];
	return (dest);
}

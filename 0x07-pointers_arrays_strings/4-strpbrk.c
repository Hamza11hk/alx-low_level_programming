#include "main.h"
/**
 * _strpbrk - finds string
 * @s: string to find stuff
 * @accept: accepting arrays
 * Return: returns new value
 */
char *_strpbrk(char *s, char *accept)
{
	int x;
	int w;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (w = 0; accept[w] != '\0'; w++)
		{
			if (s[x] == accept[w])
			{
				return (s + x);
			}
		}
	}
	return (0);
}

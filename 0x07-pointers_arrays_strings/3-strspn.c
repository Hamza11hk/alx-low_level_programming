#include "main.h"
/**
 * _strspn - search a string for a set of bytes
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: returns usigned values
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	int w;
	unsigned int r = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (w = 0; s[w] != '\0'; w++)
		{
			if (s[x] == accept[w])
			{
				r++;
				break;
			}
		}
		if (s[w] == '\0')
			return (r);
	}
	return (r);
}

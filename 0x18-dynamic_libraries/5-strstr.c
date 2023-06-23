#include "main.h"
#include <stdlib.h>
/**
 * _strstr - locates substring
 * @haystack: string
 * @needle: substring
 * Return: returns string at starting sub or null
 */

char *_strstr(char *haystack, char *needle)
{
	int x, w, c;

	x = 0;
	c = 0;
	while (haystack[x] != '\0')
	{
		w = 0;
		while (needle[w + c] != '\0' && haystack[x + c] != '\0'
		       && needle[w + c] == haystack[x + c])
		{
			if (haystack[x + c] != needle[w + c])
				break;
			c++;
		}
		if (needle[w + c] == '\0')
			return (&haystack[x]);
		w++;
		x++;
	}

	return (NULL);
}


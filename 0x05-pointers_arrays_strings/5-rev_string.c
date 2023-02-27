#include "main.h"
/**
 * rev_string - function that reverses the string
 * @s: a variabl hold the string
 */
void rev_string(char *s)
{
	int a, b;
	char c, d;

	for (a = 0; s[a] != '\0'; a++)
		;

	a--;
	for (b = 0 ; b < a; b++)
	{
		c = s[a];
		d = s[b];
		s[a--] = d;
		s[b] = c;
	}
}

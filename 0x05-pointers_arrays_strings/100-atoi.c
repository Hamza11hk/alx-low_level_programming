#include "main.h"
#include "2-strlen.c"
/**
 * _atoi - converts string to integer
 * @s: string to convert
 * Return: returns integer value
 */
int _atoi(char *s)
{
	int a;
	int b = 0;
	int c;
	int d = 1;
	int n = 0;

	for (a = 0; a < _strlen(s); a++)
	{
		if (!(s[a] >= '0' && s[a] <= '9') && c > 0)
			break;
		if (s[a] == '-')
			b--;
		if (s[a] == '+')
			b++;
		if (s[a] >= '0' && s[a] <= '9')
		{
			c++;
		}
	}
	while (c > 0)
	{
		n += ((s[a - 1] - '0') * d);
		a--;
		c--;
		d *= 10;
	}
	if (b >= 0)
	{
		n *= 1;
	} else
	{
		n *= -1;
	}
	return (n);
}

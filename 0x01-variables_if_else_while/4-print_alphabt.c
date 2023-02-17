#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char e = 'a';

	while (e <= 'z')
	{
		if (e != 'q' && e != 'e')
			putchar(e);
		e++;
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	int m, n;

	for (int i = 0; i < 72; i++)
	{
		m = i / 9;
		n = i % 9;
		if (m != n)
		{
			putchar(m + '0');
			putchar(',');
			putchar(n + '0');
			putchar(' ');
		}
	}
	return (0);
}

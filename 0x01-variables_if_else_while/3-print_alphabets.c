#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	char e;

	for (e = 'a'; e <= 'z' ; e++)
		putchar(e);
	for (e = 'A'; e <= 'Z'; e++)
		putchar(e);
	putchar('\n');
	return (0);
}

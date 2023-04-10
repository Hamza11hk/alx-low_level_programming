#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary epresentation of a number
 * @n: the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (m > 0 && !(n & m))
		m >>= 1;

	while (m > 0)
	{
		if (n & m)
			_putchar('1');
		else
			_putchar('0');
		m >>= 1;
	}
}

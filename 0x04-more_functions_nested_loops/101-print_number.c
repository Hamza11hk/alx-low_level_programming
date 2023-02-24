#include "main.h"
/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */
void print_number(int n)
{
	unsigned int t, d, p = n;
	double b = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			p = n * -1;
			_putchar('-');
		}

		while (b <= p)
			b *= 10;
		t = b / 10;

		while (t >= 1)
		{
			d = p / t;
			_putchar(d + '0');
			p = (p - (t * d));
			t /= 10;
		}
	}
}

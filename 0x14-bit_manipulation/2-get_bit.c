#include "main.h"
/**
 * get_bit - gets the bit of a given index
 * @n: the number from the bit
 * @index: the index of the bit
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;
	int b;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	m = 1UL << index;
	b = ((n & m) != 0);

	return (b);
}

#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a number
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	m <<= index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (*n & m)
		*n ^= m;

	return (1);
}

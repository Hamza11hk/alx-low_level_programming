#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number to get converted to m
 * @m: a converted number
 * Return: number of bits that need to be flipped to convert n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int db = 0;
	unsigned long int dif = n ^ m;
	unsigned int i = 0;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((dif & (1UL << i)) != 0)
			db++;
	}

	return (db);
}

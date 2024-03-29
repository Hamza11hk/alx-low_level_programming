#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hs;
	int i;

	hs = 5381;
	while ((i = *str++))
	{
		hs = ((hs << 5) + hs) + i; /* hs * 33 + i */
	}
	return (hs);
}

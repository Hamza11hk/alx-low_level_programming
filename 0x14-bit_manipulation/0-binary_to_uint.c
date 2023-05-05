#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary string
 * Return: unsigned int similar of binary string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int rst = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '1')
			rst |= 1;
		else if (*b != '0'
				return (0);

				if (*(b + 1) != '\0')
				rst <<= 1;

				b++;
	}

	return (rst);
}

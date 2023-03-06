#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagonal summaries
 * @a: array to use
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(i * size) + i];
		sum2 += a[(1 - size) + ((size - 1) * i)];
	}

	printf("%d, %d\n", sum1, sum2);
}

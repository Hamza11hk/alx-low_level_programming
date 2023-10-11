#include "search_algos.h"

/**
 * binary_search - binary_search
 * @array: pointers
 * @size: size
 * @value: value
 * Return: macht
 * Description: Fuction
 */
int binary_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		int izq, der, med, i;

		izq = 0;
		der = size - 1;

		while (izq <= der)
		{
			med = (izq + der) / 2;
			printf("Searching in array: ");
			for (i = izq; i < der; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d", array[der]);
			printf("\n");
			if (value == array[med])
				return (med);
			else if (value < array[med])
				der = med - 1;
			else
				izq = med + 1;
		}
		return (-1);
	}
	return (-1);
}

#include "search_algos.h"

/**
 * advanced_binary - binary_search
 * @array: pointers
 * @size: size
 * @value: value
 * Return: macht
 * Description: Fuction
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t izq, der;

	izq = 0;
	der = size - 1;

	if (array != NULL)
		return (recursi_advanced_binary(array, izq, der, value));
	else
		return (-1);
	return (-1);
}
/**
 * recursi_advanced_binary - recursi_advanced_binary
 * @array: pointers
 * @izq: size
 * @der: value
 * @value: value
 * Return: macht
 * Description: Fuction
 */

int recursi_advanced_binary(int *array, size_t izq, size_t der, int value)
{
	size_t i;
	size_t med;

	if (izq <= der)
	{
		med = (izq + der) / 2;
		printf("Searching in array: ");
		for (i = izq; i < der; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d", array[der]);
		printf("\n");
		if ((value == array[med]) && ((izq == med) || (value != array[med - 1])))
			return (med);
		else if (value <= array[med])
			der = med;
		else
			izq = med + 1;
		return (recursi_advanced_binary(array, izq, der, value));
	}
	return (-1);
}

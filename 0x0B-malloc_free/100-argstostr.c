#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *x, *r;
	int i, j, t;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, t = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, t++)
			;
		t++;
	}
	t++;

	x = malloc(t * sizeof(char));
	if (x == NULL)
		return (NULL);

	r = x;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*x = av[i][j];
			x++;
		}
		*x = '\n';
		x++;
	}

	return (r);
}

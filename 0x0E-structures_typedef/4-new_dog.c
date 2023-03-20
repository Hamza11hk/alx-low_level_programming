#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, l1, l2;
	dog_t *ndog;
	char *x, *c;

	l1 = 0;
	for (i = 0; name[i] != '\0'; i++)
		l1++;
	l2 = 0;
	for (i = 0; owner[i] != '\0'; i++)
		l2++;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	x = malloc((l1 + 1) * sizeof(char));
	if (x == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		x[i] = name[i];
	x[i] = '\0';
	ndog->name = x;
	ndog->age = age;
	c = malloc((l2 + 1) * sizeof(char));
	if (c == NULL)
	{
		free(x);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < l2; i++)
		c[i] = owner[i];
	c[i] = '\0';
	ndog->owner = c;
	return (ndog);
}

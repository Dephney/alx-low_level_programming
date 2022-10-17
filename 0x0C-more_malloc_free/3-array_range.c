#include "main.h"

/**
* *array_range - Creates array of integers
* @min: int
* @max: int
* Return: int array
*/

int *array_range(int min, int max)
{
	char *p;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	p = malloc(sizeof(int) * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = min++;
	}

	return (p);
}

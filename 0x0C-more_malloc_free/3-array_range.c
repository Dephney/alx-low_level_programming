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
	int count;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	count = 0;

	while (min <= max)
	{
		p[count] = min;
		count++;
		min++;
	}

	return (p);
}

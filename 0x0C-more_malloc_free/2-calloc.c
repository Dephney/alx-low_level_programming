#include "main.h"

/**
* _calloc - Allocate memory for an array.
* @nmemb: number of elements
* @size: bytes of each element
* Return: void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	unsigned int count;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	count = 0;

	while (count < (nmemb * size))
	{
		arr[count] = 0;
		count++;
	}

	return (arr);
}


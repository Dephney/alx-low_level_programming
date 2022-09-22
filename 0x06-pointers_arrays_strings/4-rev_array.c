#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0, j;

	n -= 1;

	while (i <= n)
	{
		j = a[i];
		a[i++] = a[n];
		a[i--] = j;
	}

}

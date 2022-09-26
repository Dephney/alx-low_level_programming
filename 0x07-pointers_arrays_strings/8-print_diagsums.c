#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 *
 * @a: pointer to matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (j = 0; j < size; j++)
	{
		i = (j * size) + j;
		sum1 += a[i];
	}

	for (j = 1; j <= size; j++)
	{
		i = (j * size) - j;
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}


#include "variadic_functions.h"

/**
* sum_them_all - Sum all params
* @n: const unsigned int
* Return: int sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;

	unsigned int i, sum = 0;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}

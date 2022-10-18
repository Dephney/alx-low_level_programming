#include "variadic_functions.h"

/**
* print_numbers -  prints numbers separated by separator
* @seperator: String beetween numbers
* @n: Number of args
* Return void
*/

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list nums;

	unsigned int i;

	va_start(nums, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, unsigned int));

		if (i != (n - 1))
			printf("%s", seperator);
	}
	printf('\n');

	va_end(nums);
}

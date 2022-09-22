#include "main.h"

/**
 * print_number - prints an integer, using _putchar
 *
 * @n: integer to be printed.
 * Return: nothing
 */
void print_number(int n)
{
	int i;

	i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -n;
	}

	if (i / 10)
	{
		print_number(i / 10);
	}

	_putchar((i % 10) + '0');
}

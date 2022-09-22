#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line
 * @size: is the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				k = (size - i) - 1;
				if (j < k)
					_putchar(' ');
				else
					_putchar(35);
			}

			_putchar('\n');
		}
}


#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse, followed by a
 * new line
 * @s: string to be printed
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, length;

	i = 0;
	length = 0;

	while (s[i] != '\0')
	{
		length = i + 1;
		i++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}

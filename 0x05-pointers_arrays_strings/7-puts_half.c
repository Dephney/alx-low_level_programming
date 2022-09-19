#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: string whose charaters will be printed
 * Return: nnothing
 */
void puts_half(char *str)
{
	int i = 0;

	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	j = i / 2;

	if (i % 2 == 1)
	{
		j++;
	}

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}



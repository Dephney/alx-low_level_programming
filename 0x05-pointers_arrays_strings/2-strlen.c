#include "main.h"

/**
 * _strlen -  a function that returns the length of a string
 * @s: string input
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	int length;

	length = 0;

	i = 0;

	while (s[i] != '\0')
	{
		length = i + 1;
		i++;
	}

	return (length);

}

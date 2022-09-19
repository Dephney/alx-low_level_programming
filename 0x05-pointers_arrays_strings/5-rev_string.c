#include "main.h"

/**
 * rev_string -  a function that reverses a string
 * @s: string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	char c;

	int i = 0, length;

	length = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	length = i - 1;

	for (i = 0; i < length / 2; i++)
	{
		c = s[i];
		s[i] = s[length];
		s[length--] = c;
	}
}

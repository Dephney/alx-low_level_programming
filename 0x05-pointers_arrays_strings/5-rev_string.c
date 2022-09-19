#include "main.h"

/**
 * rev_string -  a function that reverses a string
 * @s: string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	char c;

	int i = 0;

	int length = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;

	while (length < i)
	{

		c = s[i];
		s[i] = s[length];
		s[length] = c;
		length++;
		i--;
	}
}

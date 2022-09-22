#include "main.h"

/**
 * *leet - a function that encodes a string into 1337
 * @p: pointer to string.
 * Return: char
 */
char *leet(char *p)
{
	int i = 0, j = 0;

	char *letters = "aAeEoOlLtT", *numbers = "4433001177";

	while (p[i] != '\0')
	{
		while (letter[j] != '\0')
		{
			if (p[i] == letters[j])
				p[i]  = numbers[j];
			j++;
		}
		j = 0;
		i++;
	}
	return (p);

}

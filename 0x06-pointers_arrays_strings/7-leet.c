#include "main.h"

/**
 * *leet - a function that encodes a string into 1337
 * @s: pointer to string.
 * Return: char
 */
char *leet(char *s)
{
	int i = 0, j = 0;

	string *letters = "aAeEoOlLtT", *numbers = "4433001177";

	while (s[i] != '\0')
	{
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
				s[i]  = numbers[j];
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}



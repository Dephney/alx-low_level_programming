#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @s: string where character will be searched
 * @c: character to be located
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != c && s[i] != '\n')
	{
		if (s[i] == c)
			return (&s[i]);
		else
			return (NULL);
		i++;
	}


}

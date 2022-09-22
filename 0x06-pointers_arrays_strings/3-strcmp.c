#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	j = s1[i] - s2[i];

	return (j);
}

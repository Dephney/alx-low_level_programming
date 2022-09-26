#include "main.h"

/**
 * _strspn -  a function that gets the length of a prefix substring
 * @accept:  number of bytes
 * @s: string
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, k = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (k);
		}
		i++;
	}
	return (k);
}

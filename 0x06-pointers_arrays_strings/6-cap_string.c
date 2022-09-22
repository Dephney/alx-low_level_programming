#include "main.h"

/**
 * cap_string - capitalizes every first letter of a word in a string.
 * @p: pointer to string.
 * Return: pointer to string
 */
char *cap_string(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[0] >= 97 && p[0] <= 122)
		{
			p[0] = p[0] - 32;
		}

		if (p[i] == ' ' || p[i] == '\t' || p[i] == '\n'
				 || p[i] == ',' || p[i] == ';' || p[i] == '.'
				 || p[i] == '.' || p[i] == '!' || p[i] == '?'
				 || p[i] == '"' || p[i] == '(' || p[i] == ')'
				 || p[i] == '{' || p[i] == '}')
		{
			if (p[i + 1] >= 97 && p[i + 1] <= 122)
			{
				p[i + 1] = p[i + 1] - 32;
			}
		}
		i++;
	}
	return (p);


}

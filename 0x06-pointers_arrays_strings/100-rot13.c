#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13.
 * @s: pointer to char
 *  Return: char
 */
char *rot13(char *s)
{
	int i, j;

	char row1[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
			'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x'
			, 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'
			, 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
			'U', 'V', 'W', 'X', 'Y', 'Z'};

	char row2[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
			'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'
			, 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V'
			, 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G'
			, 'H', 'I', 'J', 'K', 'L', 'M'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (row1[j] == s[i])
			{
				s[i] = row2[j];
				break;
			}
		}
	}

	return (s);

}


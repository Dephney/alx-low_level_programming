#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 * @src: string to be appended to des
 * @dest: sting to be appended on by src
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length++;
	}
	dest[length] = '\0';
	return (dest);

}

#include "main.h"

/**
 * *_strncat -  a function that concatenates two strings.
 * @src: pointer to source char
 * @dest: pointer to destination char
 * @n: max number of bytes fom src
 * Return:  a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);



}

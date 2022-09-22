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
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);



}

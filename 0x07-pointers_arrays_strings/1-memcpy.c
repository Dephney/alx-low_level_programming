#include "main.h"

/**
 * *_memcpy - a funtion that copies memory area
 * @n: number of memory bytes
 * @src: source memory area
 * @dest: memory area to be copied to
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		src[i] = dest[i];

	return (dest);
}

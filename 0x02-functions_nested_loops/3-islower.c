#include <stdio.h>
#include "main.h"

/**
 * _isLower - a function that checks for lower case character
 * @c: character input parameter
 * Return: 1 if c is character or 0 if c is not a character
 */
int _isLower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}

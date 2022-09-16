#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: integer input
 * Return: 1 if c is digit otherwise 0
 */
int _isdigit(int c)
{
	if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5'
			|| c == '6' || c == '7' || c == '8' || c == '9')
		return (1);
	else
		return (0);


}

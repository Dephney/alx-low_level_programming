#include <stdio.h>
#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @num: input integer
 * Return: absolute value
 */
int _abs(int num)
{
	num = num * ((num > 0) - (num < 0));
	return (num);


}

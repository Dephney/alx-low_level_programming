#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @num: input integer
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	int i = num % 10;

	if (num < 0)
		num = -(num);

	if (i < 0)
		i = -(i);

	_putchar(i + '0');
	return (i);
}

#include <stdio.h>
#include "main.h"

/**
 * main - print _putchar
 *
 * Return - Always  (Success)
 */
int main(void)
{
	char str[8] = "_putchar";
	for (int i = 0; i < 8; i++)
	{
		char c = str[i];
		_putchar(c);
	}
	_putchar("\n");
	return (0);
}

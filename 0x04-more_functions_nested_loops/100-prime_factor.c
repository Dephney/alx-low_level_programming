#include "main.h"

/**
 * main - finds and prints the largest prime factor of the number
 * 612852475143
 * Return: 0
 */
int main(void)
{
	long num = 612852475143;
	long d = 2;
	long p = 0;

	while (num != 1)
	{
		if (num % d == 0)
		{
			num = num / d;
			p = d;
		}
		d += 1;
	}
	printf("%ld\n", p);
	return (0);
}

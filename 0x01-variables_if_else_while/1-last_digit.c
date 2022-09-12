#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - ENtry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int n;
	int last_digit;
	char str[] = "Last digit of ";

	srand(time(0));

	n = rand() - RAND_MAX;
	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -(last_digit);

	if (last_digit == 0)
		printf("%s %d is %d and is zero\n ", str, n, last_digit);
	else if (last_digit < 6 && last_digit != 0)
		printf("%s %d is %d and is less than 6 and not 0\n ", str, n, last_digit);
	else
		printf("%s %d is %d and is greater than 5\n ", str, n, last_digit);
	return (0);

}

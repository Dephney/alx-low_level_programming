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

	srand(time(0));

	n = rand() - RAND_MAX;
	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -(last_digit);

	if (last_digit > 5)
		printf("The last digit of %d is %d and is greater than 5\n ", n, last_digit);
	if (last_digit == 0)
		printf("The last digit of %d is %d and is zero\n ", n, last_digit);
	if (last_digit < 6 && last_digit != 0)
		printf("The last digit of %d is %d and is less than 6 and not 0\n ",
			n, last_digit);
	return (0);

}

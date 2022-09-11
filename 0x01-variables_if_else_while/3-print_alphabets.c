#include <stdio.h>

/*
 * main - Entry point
 * description: a function tha prints out alphabets
 * in lowercase and uppercase
 * return: Always 0 (Success)
 */
int main(void)
{
	char lower_alpha;
	char upper_alpha;

	for (lower_alpha = 'a'; lower_alpha <= 'z'; lower_alpha++)
		putchar(lower_alpha);
	for (upper_alpha = 'A'; upper_alpha <= 'Z'; upper_alpha++)
		putchar(upper_alpha);
	putchar('\n');
	return (0);
}

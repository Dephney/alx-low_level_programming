#include <stdio.h>
/*
 * main - Entry point
 * description:print the alphabets in lowercase
 * return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar("%c", alpha);
	putchar('\n');
	return (0);
}


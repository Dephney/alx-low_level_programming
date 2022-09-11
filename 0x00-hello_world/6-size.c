#include <stdio.h>

/*
 * main - Entry point
 * description: a function that prints out the size of
 * int,float,char,long int and long long int
 * return Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %d byte(s)\nSize of an int: %d byte(s)\n
			Size of a long int: %d byte(s)\nSize of a long long int:
			%d byte(s)\nSize of a float: %d bte(s)\n",
			sizeof(char), sizeof(int), sizeof(long), sizeof(long long), sizeof(float));
	return (0);
}

#include "main.h"

/**
* create_array - Returns a pointer to a newly allocated space in memory.
* @size: unsigned int
* @c: char
* Return: char pointer
*/

char *create_array(unsigned int size, char c)
{
	unsigned int count;

	char *myChar;

	count = 0;

	if (size == 0)
	{
		return (NULL);
	}
	myChar = malloc(sizeof(char) * size);

	if (myChar == NULL)
	{
		return (NULL);
	}
	while (count < size)
	{
		myChar[count] = c;
		count++;
	}
	myChar[count] = '\0';

	return (myChar);
}

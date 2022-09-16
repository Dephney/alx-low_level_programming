#include "main.h"

/**
 * _isupper -  a function that checks for uppercase character.
 * @c: input integer
 * Return: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c == 'A' || c == 'B' || c == 'C' || c == 'D' || c == 'E'
			|| c == 'F' || c == 'G' || c == 'H' || c == 'I'
			|| c == 'J' || c == 'K' || c == 'L' || c == 'M'
			|| c == 'N' || c == 'O' || c == 'P' || c == 'Q'
			|| c == 'R' || c == 'S' || c == 'T' || c == 'U'
			|| c == 'V' || c == 'W' || c == 'X' || c == 'Y'
			|| c == 'Z')
		return (1);
	else
		return (0);

}

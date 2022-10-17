#include "variadic_functions.h"
/**
* print_all - Prints anything
* @format: List of args passed to function
*/
void print_all(const char * const format, ...)
{
	char *str;

	unsigned int i = 0, j = 0;

	va_list in;

	va_start(in, format);

	while (format && format[i])
	{
		if (j)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(in, int));
				break;
			case 'i':
				printf("%i", va_arg(in, int));
				break;
			case 'f':
				printf("%f", va_arg(in, double));
				break;
			case 's':
				str = va_arg(in, char*);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
			default:
				j = 0, i++;
				continue;
		}
		i++, j = 0;
	}
	_putchar('\n');
	va_end(in);
}

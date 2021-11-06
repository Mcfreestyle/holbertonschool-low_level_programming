#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * match_type - search the character in the string
 * @list: struct that contains the arguments of the main
 * @format: string that gives information about the type of the parameters
 * @i: counter
 *
 * Return: 1 if there is match, otherwise 0
 */
int match_type(va_list list, const char * const format, int i)
{
	char *str;

	switch (*(format + i))
	{
		case 'c':
			{
				printf("%c", va_arg(list, int));
				break;
			}
		case 'i':
			{
				printf("%i", va_arg(list, int));
				break;
			}
		case 'f':
			{
				printf("%f", va_arg(list, double));
				break;
			}
		case 's':
			{
				str = va_arg(list, char *);
				if (str != NULL)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
			}
		default:
			{
				return (0);
			}
	}
	return (1);
}

/**
 * print_all - prints the parameters(numbers, strings or other)
 * @format: string that gives information about the type of the arguments
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i, j;

	i = 0;

	va_start(list, format);
	while (format != NULL && i < strlen(format))
	{
		j = match_type(list, format, i);
		if (i != (strlen(format) - 1) && j == 1)
			printf(", ");
		i++;
	}
	va_end(list);
	putchar('\n');
}

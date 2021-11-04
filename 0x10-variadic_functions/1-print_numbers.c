#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints the parameters
 * @separator: string that is between numbers
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator == NULL)
			continue;
		if (i != n)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(list);
}

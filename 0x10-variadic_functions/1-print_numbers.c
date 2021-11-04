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

	if (n == 0)
		return;

	va_start(list, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator == NULL)
			continue;
		printf("%s", separator);
	}
	printf("%d\n", va_arg(list, int));
	va_end(list);
}

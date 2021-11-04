#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints the parameters
 * @separator: string that is between numbers
 * @n: number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *temp;

	va_start(list, n);
	for (i = 1; i <= n; i++)
	{
		temp = va_arg(list, char *);
		if (temp != NULL)
			printf("%s", temp);
		else
			printf("(nil)");
		if (separator == NULL)
			continue;
		if (i != n)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(list);
}

#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 using putchar
 * Return: 0
 */
int main(void)
{
	int i = '0';

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

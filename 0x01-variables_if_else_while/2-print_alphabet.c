#include <stdio.h>
/**
 * main - print the alphabet using putchar
 * Return: 0
 */
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

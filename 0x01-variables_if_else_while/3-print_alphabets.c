#include <stdio.h>
/**
 * main - print the alphabet in lowercase and uppercase using putchar
 * Return: 0
 */
int main(void)
{
	int a, z;

	a = 'a';
	z = 'z';

	while (a <= z)
	{
		putchar(a);
		a++;
		if (a == 'z')
		{
			a = 'A';
			z = 'Z';
		}
	}
	putchar('\n');
	return (0);
}

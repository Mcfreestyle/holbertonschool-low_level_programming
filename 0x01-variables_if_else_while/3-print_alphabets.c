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
		if (a == 'z')
		{
			a = '@';
			z = 'Z';
		}
		a++;
	}
	putchar('\n');
	return (0);
}

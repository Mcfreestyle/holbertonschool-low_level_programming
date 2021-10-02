#include <stdio.h>
/**
 * main - print the alphabet except q and e
 * Return: 0
 */
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}

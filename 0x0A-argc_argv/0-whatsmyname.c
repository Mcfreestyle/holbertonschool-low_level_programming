#include <stdio.h>

/**
 * main - prints its name
 * @argc: take the number of arguments in the prompt
 * @argv: array that contains the values of the arguments
 *
 * Return: 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	/*(void)argc;*/
	return (0);
}

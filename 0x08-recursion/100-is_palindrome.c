#include <string.h>

/**
 * number_of_matches - calculate the number of matches
 * @s: pointer to string
 * @len: length of the string
 * @c: counter that gets the right matches
 * @i: number of iterations
 *
 * Return: the counter
 */
int number_of_matches(char *s, int len, int c, int i)
{
	if (i > len / 2)
		return (c);
	if (*s == *(s + len - 2 * i + 1))
		return (number_of_matches(s + 1, len, c + 1, i + 1));
	return (c);
}

/**
 * is_palindrome - determine if the string is a palindrome
 * @s: pointer to string
 *
 * Return: 1 if a string is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int len, c;

	len = strlen(s);
	c = number_of_matches(s, len, 0, 1);
	if (c == len / 2)
		return (1);
	else
		return (0);
}


/**
 * number_of_divisors - calculate the divisors of a number
 * @n: number to verify
 * @c: counter to know the number of divisors of the number
 * @i: increasing
 *
 * Return: the counter
 */
int number_of_divisors(int n, int c, int i)
{
	if (i > n)
		return (c);
	if (!(n % i))
		return (number_of_divisors(n, c + 1, i + 1));
	return (number_of_divisors(n, c, i + 1));
}

/**
 * is_prime_number - determine if a number is prime
 * @n: number to verify
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	int c;

	if (n > 0)
	{
		c = number_of_divisors(n, 0, 1);
		if (c == 2)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}

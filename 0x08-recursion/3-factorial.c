
/**
 * factorial - calculate the factorial of a number
 * @n: given number
 *
 * Return: n * factorial(n - 1) if the number is greater that 1.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

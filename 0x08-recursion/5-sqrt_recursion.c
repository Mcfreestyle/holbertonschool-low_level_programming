
/**
 * _sqrt_recursion_1 - calculate the square root of a greater number
 * that zero or equal a zero
 * @n: number to operate
 * @i: number of the recursion
 *
 * Return: i, otherwise -1
 */
int _sqrt_recursion_1(int n, int i)
{
	if (n == i * i)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_recursion_1(n, i + 1));
}

/**
 * _sqrt_recursion - calculate the square root of a number
 * @n: number to operate
 *
 * Return: the return of the function _sqrt_recursion_1, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion_1(n, 0));
}


/**
 * _pow_recursion - calculate the value of x raised to the power of y
 * @x: number that is raised to y
 * @y: number that is the power of x
 *
 * Return: x multiplied for x raised to the power of y - 1,
 *	-1 if y is negative
 *	and 1 if y is zero
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

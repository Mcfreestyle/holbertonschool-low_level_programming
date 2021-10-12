#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * that are out of the function
 * @a: first pointer to an int out of the function
 * @b: second pointer to an int out of the function
 */
void swap_int(int *a, int *b)
{
	int a_temp = *a;
	*a = *b;
	*b = a_temp;
}

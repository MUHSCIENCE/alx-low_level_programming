#include "main.h"

/**
 * _sqrt_fn - helps _sqrt_recursion to take different arguments
 * @i: input for iteration
 * @n: input
 *
 * Return: the resulting square root
 */
int _sqrt_fn(int n, int i)
{
	if (i * i != n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_fn(n, i + 1));
}

/**
 * * _sqrt_recursion - returns the sqrt of a number
 * @n: number input
 * Return: returns the sqrt of @n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_fn(n, 0));
			}

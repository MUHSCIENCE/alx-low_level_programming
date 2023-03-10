#include "main.h"

/**
 * is_prime_n - returns 1 if an integer is a primenumber
 * @n: number being checked whethet its a primenumber or not
 * @i: the i iterator
 * Return: returns the result
 */

int is_prime_n(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (is_prime_n(n, i - 1));
}
/**
 * is_prime_number - returns 1 if an integer is a primenumber
 * @n: number checked if is a prime number or not
 * Return: returns the result
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_n(n, n - 1));
	}

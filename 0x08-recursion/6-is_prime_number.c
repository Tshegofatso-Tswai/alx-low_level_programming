#include "main.h"

int is_prime_helper(int n, int div);

/**
 * is_prime_number - checks if a number is prime.
 * @n: number
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);

	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - helper function to check if a number is prime recursively.
 * @n: number
 * @div: divisor
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_helper(int n, int div)
{
	if (n % div == 0)
		return (0);
	else if (div * div > n)
		return (1);
	else
		return (is_prime_helper(n, div + 1));
}


#include "main.h"

int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 *
 * Return: natural square root of n, or -1 if it doesn't have one.
 */
int _sqrt_recursion(int n)
{
    return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - helper function for calculating square root recursively.
 * @n: number
 * @i: integer to check for square root
 *
 * Return: natural square root of n, or -1 if it doesn't have one.
 */
int sqrt_helper(int n, int i)
{
    if (i * i == n)
        return (i);
    else if (i * i > n)
        return (-1);
    else
        return (sqrt_helper(n, i + 1));
}


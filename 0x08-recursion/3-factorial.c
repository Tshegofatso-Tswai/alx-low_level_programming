#include "main.h"

/**
 * factorial - returns the factorial of a number.
 * @n: number
 *
 * Return: factorial of the number, or -1 for error.
 */
int factorial(int n)
{
    if (n < 0)
        return -1;
    else if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}


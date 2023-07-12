#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: number to compute the absolute value of
 *
 * Description: Computes the absolute value of a number.
 * Return: The absolute value of the input number.
 */
int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);
	else
		return (0);
}


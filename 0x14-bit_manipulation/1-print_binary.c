#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int shift = 0;

	/* Find the most significant non-zero bit */
	while ((n >> shift) > 0)
		shift++;

	/* If n is 0, print a single 0 */
	if (shift == 0)
	{
		_putchar('0');
		return;
	}

	/* Iterate through each bit starting from the most significant */
	while (shift > 0)
	{
		shift--;

		/* Use a mask to check the bit at the current position */
		if ((n & (mask << shift)) != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}

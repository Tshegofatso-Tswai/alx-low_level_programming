#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bit_len = sizeof(n) * 8;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Find the most significant non-zero bit */
	while ((n & (mask << (bit_len - 1))) == 0)
		bit_len--;

	/* Print binary representation */
	for (i = 0; i < bit_len; i++)
	{
		_putchar((n & (mask << (bit_len - 1 - i))) ? '1' : '0');
	}
}


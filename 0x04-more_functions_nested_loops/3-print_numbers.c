#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9 and end with a new line.
 *
 * Return: nothing.
 */

void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

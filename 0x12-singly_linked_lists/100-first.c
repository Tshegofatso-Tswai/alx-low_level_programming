#include <stdio.h>

/**
 * print_before_main - Function to be executed before main.
 *
 * Return: Void.
 */
void print_before_main(void) __attribute__((constructor));

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}


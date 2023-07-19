#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Prints the opcodes of its own main function.
 * @argc: Number of arguments
 * @argv: Array of string arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	unsigned char *main_addr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_addr = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_addr[i]);
		if (i != num_bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}


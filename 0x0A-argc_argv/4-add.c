#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Check if a string is a positive number
 * @str: String to be checked
 *
 * Return: 1 if it's a positive number, 0 otherwise
 */
int is_positive_number(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}

	return (1);
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}


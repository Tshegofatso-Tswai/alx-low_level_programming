#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if there are non-binary characters in b.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result * 2 + (b[i] - '0');
			i++;
		}
		else
		{
			return (0); /* Return 0 if a non-binary character is encountered */
		}
	}

	return (result);
}


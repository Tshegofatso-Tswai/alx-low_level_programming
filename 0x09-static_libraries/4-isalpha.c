#include "main.h"

/**
 * _isalpha - checks if a character is alphabetical
 * @c: character to be verified
 *
 * Description: Checks if a character is alphabetical.
 * Return: 1 if the character is alphabetical, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);
}


#include "main.h"

/**
 * wildcmp - Compares two strings and checks if they can be considered identical.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: 1 if strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are considered identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the current characters match, move to the next characters */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* If the second string has '*', it can replace any string (including empty) */
	if (*s2 == '*')
	{
		/* If the next character in s2 is also '*', skip it */
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		/* Compare s1 with the remaining characters in s2 after '*' */
		if (wildcmp(s1, s2 + 1))
			return (1);

		/* Compare the remaining characters in s1 with s2 after '*' */
		return (wildcmp(s1 + 1, s2));
	}

	/* If none of the above conditions match, strings are not identical */
	return (0);
}


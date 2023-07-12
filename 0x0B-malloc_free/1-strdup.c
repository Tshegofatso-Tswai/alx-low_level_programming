#include "main.h"
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *duplicate;
	size_t length;

	if (str == NULL)
		return (NULL);

	length = strlen(str);

	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);

	return (duplicate);
}


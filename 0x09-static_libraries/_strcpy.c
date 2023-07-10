#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the null byte,
 *           to the buffer pointed to by dest
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return ptr;
}


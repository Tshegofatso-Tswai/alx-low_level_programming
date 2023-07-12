#include "main.h"

/**
 * _strcpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 *
 * Description: Copies the string pointed to by src,
 * including the terminating null byte, to the buffer pointed to by dest.
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}

	*(dest + inc) = '\0';
	return (dest);
}


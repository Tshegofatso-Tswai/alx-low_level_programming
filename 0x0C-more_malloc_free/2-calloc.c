#include "main.h"

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 *         If nmemb or size is 0, returns NULL.
 *         If malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	void *ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	char *p = ptr;
	unsigned int i;

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (ptr);
}


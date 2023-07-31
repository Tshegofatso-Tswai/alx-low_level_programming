#include "lists.h"

/**
 * free_listint_safe - frees a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listint_t *current, *next;

	while (*h != NULL)
	{
		current = *h;
		next = current->next;

		/* Check if the current node has been visited before */
		if (current <= next)
		{
			*h = NULL; /* Set the head to NULL to prevent further access */

			/* Free all the remaining nodes */
			while (current != NULL)
			{
				next = current->next;
				free(current);
				nnodes++;
				current = next;
			}
			return (nnodes);
		}

		/* Move to the next node */
		*h = next;
		nnodes++;
	}

	return (nnodes);
}


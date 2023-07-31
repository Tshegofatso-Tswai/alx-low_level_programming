#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;
	hash_table_t *ht = NULL;

	ht = ht_create();
	if (ht == NULL)
		exit(98);

	while (current != NULL)
	{
		if (ht_key_exists(ht, current))
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}

		printf("[%p] %d\n", (void *)current, current->n);
		ht_put(ht, current, NULL);
		count++;
		current = current->next;
	}

	ht_delete(ht);
	return (count);
}


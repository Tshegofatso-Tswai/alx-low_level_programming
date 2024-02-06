#include "../search_algos.h"
#include <stdlib.h>

/**
 * skiplist_add - Adds a node to a skiplist
 * @list: The skiplist
 * @value: Value of the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
skiplist_t *skiplist_add(skiplist_t *list, int value)
{
    skiplist_t *new_node, *tmp;

    if (!list)
        return (NULL);

    new_node = malloc(sizeof(skiplist_t));
    if (!new_node)
        return (NULL);

    new_node->n = value;
    new_node->express = NULL;

    tmp = list;
    while (tmp->next)
    {
        if (tmp->n == value)
        {
            free(new_node);
            return (NULL);
        }
        if (tmp->next->n > value)
            break;
        tmp = tmp->next;
    }

    new_node->next = tmp->next;
    tmp->next = new_node;

    return (new_node);
}


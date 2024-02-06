#include "../search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_skiplist - Creates a skiplist from an array
 * @array: The input array
 * @size: Size of the array
 *
 * Return: Pointer to the head of the skiplist
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
    size_t i;
    skiplist_t *list, *node, *express;

    list = NULL;
    for (i = 0; i < size; i++)
    {
        node = malloc(sizeof(skiplist_t));
        if (!node)
            return (NULL);
        node->n = array[i];
        node->index = i;
        node->next = NULL;

        if (list == NULL)
            list = node;
        else
            express->express = node;

        if (i == 0 || i % 4 == 0)
            express = node;
    }

    return (list);
}


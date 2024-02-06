#include "../search_algos.h"
#include <stdio.h>

/**
 * print_skiplist - Prints a skiplist
 * @list: The skiplist
 */
void print_skiplist(const skiplist_t *list)
{
    printf("List :\n");
    while (list)
    {
        printf("Index[%lu] = [%d]\n", list->index, list->n);
        list = list->next;
    }
    printf("\n");
}


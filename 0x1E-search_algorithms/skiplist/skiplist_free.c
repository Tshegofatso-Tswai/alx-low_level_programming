#include "../search_algos.h"
#include <stdlib.h>

/**
 * free_skiplist - Frees a skiplist
 * @list: The skiplist
 */
void free_skiplist(skiplist_t *list)
{
    skiplist_t *tmp;

    while (list)
    {
        tmp = list;
        list = list->next;
        free(tmp);
    }
}


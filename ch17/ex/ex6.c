#include <stdlib.h>
void *delete_from_list(struct node **list, int n)
{
    struct node **cursor = list;
    while (*cursor != NULL)
    {
        if ((*item) -> value == n)
        {
            struct node to_free = *cursor;
            *cursor = (*cursor) -> next;
            free(to_free);
            break;
        }
        cursor = &(*cursor) -> next;

    }
}

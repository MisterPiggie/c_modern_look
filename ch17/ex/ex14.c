void delete_from_list(struct node **list, int n)
{
    struct node **cursor;
    struct node *to_free;
    while (*cursor != NULL)
    {
        if ((*cursor) -> value == n)
        {
            to_free = *cursor;
            *cursor = (*cursor) -> next;
            free(to_free);
            return;
        }
        cursor = &(*cursor) -> next;
    }

}

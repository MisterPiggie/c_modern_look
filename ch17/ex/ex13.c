void *insert_into_ordered_list(struct node **head, struct node *new_node)
{
    while (*head != NULL)
    {
        if ((*head) -> value >= new_node -> value)
        {
            break;
        }
        head = &(*head) -> next;
    }

    new_node -> next = *head;
    *head = new_node;
}

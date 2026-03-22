struct node *find_last (struct node *list, int n)
{
    struct node *last_seen = NULL;
    while (list != NULL)
    {
        if (list -> value == n)
           last_seen = list; 
        list = list -> next;
    }
    return last_seen;

}

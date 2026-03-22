#include <stdio.h>
int count_occurences(struct node *list, int n)
{
    int count = 0; 

    while (list != NULL)
    {
        if (list -> value == n)
            count++;
        list = list -> next;
    }
    return count;
}

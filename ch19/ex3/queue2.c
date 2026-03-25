#include "queue.h"
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct node *rear = NULL;
struct node *front = NULL;


void insert(int i)
{
    struct node *new = malloc(sizeof(struct node));
    if (new == NULL)
        exit(EXIT_FAILURE);

    if (rear == NULL)
        front = new;
    else
        rear -> next = new;
    new -> value = i;
    new -> next = NULL;
    rear = new;
}

int extract(void)
{
    struct node *to_free;  
    int i;

    if (is_empty())
        exit(EXIT_FAILURE);
    to_free = front;
    i = to_free -> value;
    front = front -> next;
    free(to_free);

    if (is_empty())
        rear = NULL;

    return i;

}
int look_front(void)
{
    if (is_empty())
        exit(EXIT_FAILURE);
    return front -> value;
}
int look_rear(void){
    if (is_empty())
        exit(EXIT_FAILURE);
	return rear -> value;
}
bool is_empty(void)
{
    return front == NULL;
}

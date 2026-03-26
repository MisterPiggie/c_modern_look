#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"
#define MAX_SIZE 100

struct node
{
    int value;
    struct node *next;
};

struct queue_type
{
    int contents[MAX_SIZE];
    struct node *rear;
    struct node *front;
};

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}
Queue create(void)
{
    Queue q = malloc(sizeof(struct queue_type));
    if (q == NULL)
        terminate("ERROR: could not create a queue");
    make_empty(q);
    return q;
}

void make_empty(Queue q)
{
    q->front = NULL;
    q->rear = NULL;
}

void destroy(Queue q)
{
    while(!is_empty(q))
        extract(q);
    free(q);
}

void insert(Queue q, int i)
{
    struct node *new = malloc(sizeof(struct node));
    if (new == NULL)
        exit(EXIT_FAILURE);

    if (q->rear == NULL)
        q->front = new;
    else
        q->rear -> next = new;
    new -> value = i;
    new -> next = NULL;
    q->rear = new;
}

int extract(Queue q)
{
    struct node *to_free;  
    int i;

    if (is_empty(q))
        exit(EXIT_FAILURE);
    to_free = q->front;
    i = to_free -> value;
    q->front = q->front -> next;
    free(to_free);

    if (is_empty(q))
        q->rear = NULL;

    return i;

}
int look_front(Queue q)
{
    if (is_empty(q))
        exit(EXIT_FAILURE);
    return q->front -> value;
}
int look_rear(Queue q){
    if (is_empty(q))
        exit(EXIT_FAILURE);
	return q->rear -> value;
}
bool is_empty(Queue q)
{
    return q->front == NULL;
}


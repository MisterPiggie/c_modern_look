#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

struct queue_type
{
    int *contents;
    int rear;
    int front;
    int size;
    int max_size;
};

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}
Queue create(int size)
{
    Queue q = malloc(sizeof(struct queue_type));
    if (q == NULL)
        terminate("ERROR: could not create a queue");
    q->max_size = size;
    make_empty(q);
    return q;
}

void make_empty(Queue q)
{
    q->size = 0;
    q->front = 0;
    q->rear = 0;
}

void destroy(Queue q)
{
    free(q);
}
void insert(Queue q, int i)
{
    if (is_full(q))
        terminate("Queue is full");

    q->contents[q->rear++] = i;
    q->size++;

    if (q->rear == q->max_size)
        q->rear = 0;
}
int extract(Queue q)
{
    int i;

    if (is_empty(q))
        terminate("ERROR: queue is empty");

    i = q->contents[q->front++];
    q->size--;

    if (q->front == q->max_size)
        q->front = 0;

    return i;
}
int look_first(const Queue q)
{
    if (is_empty(q))
        terminate("ERROR: queue is empty");
    return q->contents[q->front];
}

int look_last(const Queue q)
{
    if (is_empty(q))
        terminate("ERROR: queue is empty");
    return (q->rear ? q->contents[q->rear] : q->contents[q->max_size - 1]);
}
bool is_empty(const Queue q)
{
    return q->size == 0;
}
bool is_full(const Queue q)
{
    return q->size == q->max_size;
}



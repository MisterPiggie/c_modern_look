#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"
#define MAX_SIZE 100

struct queue_type
{
    int contents[MAX_SIZE];
    int rear;
    int front;
    int size;
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

    if (q->rear == MAX_SIZE)
        q->rear = 0;
}
int extract(Queue q)
{
    int i;

    if (is_empty(q))
        terminate("ERROR: queue is empty");

    i = q->contents[q->front++];
    q->size--;

    if (q->front == MAX_SIZE)
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
    return (q->rear ? q->contents[q->rear] : q->contents[MAX_SIZE - 1]);
}
bool is_empty(const Queue q)
{
    return q->size == 0;
}
bool is_full(const Queue q)
{
    return q->size == MAX_SIZE;
}



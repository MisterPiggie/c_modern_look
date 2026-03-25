#ifndef QUEUE_H
#define QUEUE_H

#define MAX_SIZE 50

typedef struct
{
    int contents[MAX_SIZE];
    int rear;
    int front;
    int size;
} Queue;

void insert(Queue *q, int i);
int extract(Queue *q);
int look_first(const Queue *q);
int look_last(const Queue *q);
bool is_empty(const Queue *q);


#endif 

#ifndef QUEUE_H
#define QUEUE_H
#include <stdbool.h>

typedef struct queue_type *Queue;


static void terminate(const char *message);
void make_empty(Queue q);
Queue create(void);
void destroy(Queue q);
void insert(Queue q, int i);
int extract(Queue q);
int look_first(const Queue q);
int look_last(const Queue q);
bool is_empty(const Queue q);
bool is_full(const Queue q);


#endif // !QUEUE_H

#include "queue.h"
#include <stdlib.h>
#define MAX_ELEMS 100

int queue[MAX_ELEMS];

int rear = 0;
int front = 0;
int num_elems = 0;


void insert(int i)
{
    if (num_elems == MAX_ELEMS)
        exit(EXIT_FAILURE);
    queue[rear++] = i;
    rear %= MAX_ELEMS;
    num_elems++;
}
int extract(void)
{
    int result;
    
    if (is_empty())
        exit(EXIT_FAILURE);
    result = queue[front++];
    front %= MAX_ELEMS;
    num_elems--;

    return result;
    
}
int look_front(void)
{
    if (is_empty())
        exit(EXIT_FAILURE);
    return queue[front];    
}
int look_rear(void){
    if (is_empty())
        exit(EXIT_FAILURE);
	return (rear ? queue[rear - 1] : queue[MAX_ELEMS - 1]);
}
bool is_empty(void)
{
    return num_elems == 0;
}

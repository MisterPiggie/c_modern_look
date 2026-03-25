#include <stdio.h>
#include <stdlib.h>
#include "stack2.h"


static int contents[STACK_SIZE];
static int top = 0;

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE) ;
}

void make__empty(Stack *s)
{
    while(!is_empty(s))
    {
        pop(s);
    }
}

bool is_empty(const Stack *s)
{
    return *s == NULL;
}

bool is_full(const Stack *s)
{
    return false;
}

void push(Stack *s, int i)
{
    struct node *new = malloc(sizeof(Stack));
    if (new == NULL)
        terminate("Error in push: stack is full.");
    new -> value = i;
    new -> next = *s;
    *s = new;
}

int pop(Stack *s)
{
    struct node *to_free;
    int i;

    if (is_empty(s))
        terminate("Error in pop: stack is empty");
    to_free = *s;
    i = (*s) ->value;

    *s = (*s) -> next;
    free(to_free);

    return i;
}

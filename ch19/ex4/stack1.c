#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


static int contents[STACK_SIZE];
static int top = 0;

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE) ;
}

void make__empty(Stack *s)
{
    s -> top = 0;
}

bool is_empty(const Stack *s)
{
    return s -> top == 0;
}

bool is_full(const Stack *s)
{
    return s -> top == STACK_SIZE;
}

void push(Stack *s, int i)
{
    if (is_full(s))
        terminate("Error in push: stack is full.");
    s -> contents[s -> top++] = i;
}

int pop(Stack *s)
{
    if (is_empty(s))
        terminate("Error in pop: stack is empty");
    return s -> contents[--s -> top];
}

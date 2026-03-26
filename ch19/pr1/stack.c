#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"




static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE) ;
}

void make_empty(Stack *s)
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

void push(Stack *s, char ch)
{
    if (is_full(s))
        terminate("Error in push: stack is full.");
    s -> contents[s -> top++] = ch;
}

char pop(Stack *s)
{
    if (is_empty(s))
        terminate("Error in pop: stack is empty");
    return s -> contents[--s -> top];
}




int main(void)
{
    char ch;
    Stack *st = malloc(sizeof(Stack));
    if (st == NULL)
        terminate("ERROR: malloc failed");
    st->top = 0;
    printf("Enter parentheses and/or braces: ");
    while ((ch = getchar()) != '\n') {
        if (ch == '(' || ch == '{')
        {
            push(st, ch);
        }
        if (ch == ')' && pop(st) !='(') {
            printf("Parentheses/braces are not nested properly\n");
            return 0;
        }
        if (ch == '}' && pop(st) !='{') {
            printf("Parentheses/braces are not nested properly\n");
            return 0;
        }
    }

    if (is_empty(st) != true) 
    {
        printf("Parentheses/braces are not nested properly\n");
        return 0;
    }
    printf("Parentheses/braces nested properly\n");
}


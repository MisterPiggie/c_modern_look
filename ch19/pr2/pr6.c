#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define STACK_SIZE 100


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



void operator(Stack *st, char ch)
{
    char num1, num2;
    num2 = pop(st);
    num1 = pop(st);
    switch (ch) {
        case '+':
            push(st, num1+num2);
            break;
        case '-':
            push(st, num1-num2);
            break;
        case '*':
            push(st, num1*num2);
            break;
        case '/':
            push(st, num1/num2);
            break;
    }
}


int main(void)
{
    char ch; 
    Stack *st = malloc(sizeof(Stack));
    if (st == NULL)
        terminate("ERROR: malloc failed");
    st->top = 0;
    while (true) {

        printf("Enter an RPN expression: ");
        while ((ch = getchar()) != '\n') 
        {
            switch (ch) {
                case 48: case 49: case 50: case 51: case 52: 
                case 53: case 54: case 55: case 56: case 57:
                    {
                        push(st, ch - '0');
                        break;
                    }
                case '+': case '-': case '*': case '/':
                    {
                        operator(st, ch);
                        break;
                    }
                case '=':
                    {
                        printf("Value of expression: %d\n", st->contents[st->top-1]);
                        st->top = 0;
                        break;
                    }
                default:
                    exit(EXIT_SUCCESS);
            } 
        }
    }
}



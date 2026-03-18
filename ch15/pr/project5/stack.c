#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define STACK_SIZE 100


char contents[STACK_SIZE];
int top = 0;

void stack_overflow(void)
{
    printf("expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Not enough operands\n");
    exit(EXIT_FAILURE);
}



void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char ch)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = ch;
}

char pop(void)
{
    if (is_empty())
    {
        stack_underflow();
        return 0;
    }else
        return contents[--top];
}

void operation (char ch)
{
    char num1, num2;
    num2 = pop();
    num1 = pop();
    switch (ch) {
        case '+':
            push(num1+num2);
            break;
        case '-':
            push(num1-num2);
            break;
        case '*':
            push(num1*num2);
            break;
        case '/':
            push(num1/num2);
            break;
    }
}




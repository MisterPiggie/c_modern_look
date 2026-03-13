#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100


char contents[STACK_SIZE];
int top = 0;

void stack_overflow(void)
{
    printf("Stack overflow");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Parentheses aren't matched");
    exit(EXIT_SUCCESS);
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


int main(void)
{
    char ch;
    printf("Enter parentheses and/or braces: ");
    while ((ch = getchar()) != '\n') {
        if (ch == '(' || ch == '{')
        {
            push(ch);
        }
        if (ch == ')' && pop() !='(') {
            printf("Parentheses/braces are not nested properly\n");
            return 0;
        }
        if (ch == '}' && pop() !='{') {
            printf("Parentheses/braces are not nested properly\n");
            return 0;
        }
    }

    if (is_empty() != true) 
    {
        printf("Parentheses/braces are not nested properly\n");
        return 0;
    }
    printf("Parentheses/braces not nested properly\n");
}


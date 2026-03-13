#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

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

void operator(char ch)
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


int main(void)
{
    char ch;
    while (true) {

        printf("Enter an RPN expression: ");
        while ((ch = getchar()) != '\n') 
        {
            switch (ch) {
                case 48: case 49: case 50: case 51: case 52: 
                case 53: case 54: case 55: case 56: case 57:
                    {
                        push(ch - '0');
                        break;
                    }
                case '+': case '-': case '*': case '/':
                    {
                        operator(ch);
                        break;
                    }
                case '=':
                    {
                        printf("Value of expression: %d\n", contents[top-1]);
                        top = 0;
                        break;
                    }
                default:
                    exit(EXIT_SUCCESS);
            } 
        }
    }
}



#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"



int main(void)
{
    char ch, *message;
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
                        operation(ch);
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



#include <stdio.h>


int main(void) 
{
    double first_num, second_num;
    char ch;
    printf("Enter an expression: ");
    scanf("%lf", &first_num);

    while ((ch = getchar()) != '\n') 
    {
        switch (ch) {
            case '+':   
                { 
                    scanf("%lf", &second_num);
                    first_num += second_num;
                    break;
                }
            case '-':   
                { 
                    scanf("%lf", &second_num);
                    first_num -= second_num;
                    break;
                }
            case '*':   
                { 
                    scanf("%lf", &second_num);
                    first_num *= second_num;
                    break;
                }
            case '/':   
                { 
                    scanf("%lf", &second_num);
                    first_num /= second_num;
                    break;
                }
        }
    }
    printf("Value of expression: %lf", first_num);
    return 0;
}

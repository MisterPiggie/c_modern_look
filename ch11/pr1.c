#include <stdio.h>

void pay_amount ( int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars = dollars - 20 * *twenties;
    *tens = dollars / 10;
    dollars = dollars - 10 * *tens;
    *fives = dollars / 5;
    *ones = dollars - 5 * *fives;
}



int main(void) 
{
    int dollars, num_of_20, num_of_10, num_of_5, num_of_1;
    printf("Enter a dollar amount :");
    scanf("%d", &dollars);

    pay_amount(dollars, &num_of_20, &num_of_10, &num_of_5, &num_of_1);
   

    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", num_of_20, num_of_10, num_of_5, num_of_1);



    return 0;
}

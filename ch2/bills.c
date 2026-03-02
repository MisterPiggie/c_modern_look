#include <stdio.h>



int main(void) 
{
    int dollars, num_of_20, num_of_10, num_of_5, num_of_1;
    printf("Enter a dollar amount :");
    scanf("%d", &dollars);
    num_of_20 = dollars / 20;
    dollars = dollars - 20 * num_of_20;
    num_of_10 = dollars / 10;
    dollars = dollars - 10 * num_of_10;
    num_of_5 = dollars / 5;
    dollars = dollars - 5 * num_of_5;
    num_of_1 = dollars;

    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", num_of_20, num_of_10, num_of_5, num_of_1);



    return 0;
}

#include <stdio.h>



int main(void)
{
    int income;
    float tax;
    printf("Enter taxable income: ");
    scanf("%d", &income);
    
    printf("Tax: %.2f$\n", tax);
    return 0;
}

float income_tax(int income){
    float tax;
    if (income > 7000) 
    {
        tax = 230 + income * 0.06;
    } else if ( income > 5250) 
    {
        tax = 142.5 + income * 0.05;
    } else if (income > 3750)
    {
        tax = 82.5 + income * 0.04;
    } else if (income > 2250)
    {
        tax = 37.5 + income * 0.03;
    } else if (income > 750) 
    {
        tax = 7.5 + income * 0.02;
    } else 
    { 
        tax = income * 0.01;
    }
    return tax;
}

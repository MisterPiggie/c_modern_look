#include <stdio.h>


int main(void)
{
    float amount, rate, payment, test;
    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter montly payment: "); 
    scanf("%f", &payment);

    rate = (rate / 100.0) / 12;

    
    float first_balance, second_balance, third_balance;
    first_balance = amount - payment + amount * rate;
    second_balance = first_balance- payment + first_balance * rate;
    third_balance = second_balance - payment + second_balance * rate;
    printf("Balance after first payment: %.2f\n", first_balance);
    printf("Balance after second payment: %.2f\n", second_balance);
    printf("Balance after third payment: %.2f\n", third_balance);
 
    return 0;
}

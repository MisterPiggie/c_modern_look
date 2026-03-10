#include <stdio.h>


int main(void)
{
    float amount, rate, payment, test, num_of_payments;
    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("enter montly payment: "); 
    scanf("%f", &payment);
    printf("enter number of payments: "); 
    scanf("%f", &num_of_payments);

    rate = (rate / 100.0) / 12;


    for (int i = 0; i < num_of_payments; ++i)
    {
        amount -= payment + amount * rate;
        printf("Balance after third payment: %.2f\n", amount);
    }

    return 0;
}

#include <stdio.h>

#define TAX 1.05f

int main(void) 
{
    float dollars_and_cents, taxed;
    printf("Enter dollars-and-cents amount: ");
    scanf("%f", &dollars_and_cents );

    printf("With tax added: $%.2f\n", dollars_and_cents * TAX);
    return 0;
}

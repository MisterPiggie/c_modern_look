#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void) {
    int num1, num2, reduced_numeratorm, reduced_denominator;
    printf("Enter a fraction: ");
    scanf("%d/%d", &num1, &num2);
    reduce(num1, num2, &reduced_numeratorm, &reduced_denominator);
    printf("In lowest: %d/%d", reduced_numeratorm, reduced_denominator);
    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int num1 = numerator, num2 = denominator, r;
    while ( num2 != 0 ) {
        r = num1 % num2;
        num1 = num2;
        num2 = r;
    }
    *reduced_numerator = numerator / num1;
    *reduced_denominator = denominator / num1;
}

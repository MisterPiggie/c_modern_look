#include <stdio.h>

int polynominal(int x);

int main(void)
{
    int x, result;

    printf("Enter x: ");
    scanf("%d", &x);

    result = polynominal(x);
    printf("Result = %d\n", result);
    return 0;
}

int polynominal(int x) 
{
    return (3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6);
}

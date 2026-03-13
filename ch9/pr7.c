#include <stdio.h>

int power( int x, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0) {
        return power(x, n/2) * power(x, n/2);
    } else
    {
        return x * power(x, n - 1);
    }
}


int main(void)
{
    int x, n;
    printf("Enter number and power: ");
    scanf("%d %d", &x, &n);
    printf("Result: %d\n", power(x, n));
    return 0;
}

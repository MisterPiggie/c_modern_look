#include <stdio.h>


int main(void) 
{
    int n, divisor;
    float sum;

    printf("Enter a num: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; ++i) 
    {
        divisor = 0;
        for (int j = 1; j <=i; ++j) {
            divisor += j;
        }
        sum += 1.0/divisor;
    }
    printf("%f\n", sum);
    return 0;
}

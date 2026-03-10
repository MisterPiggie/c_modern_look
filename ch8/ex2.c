#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    long n;
    short digit;
    int repeated[10] = {0};

    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while (n > 0) 
    {
        digit = n % 10;
        repeated[digit] += 1;
        n /= 10;
    }
    
    printf("Digit:\t\t 0 1 2 3 4 5 6 7 8 9\n");
    printf("Occurrences:\t ");

    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", repeated[i]);
    }
    printf("\n");
    return 0;
}

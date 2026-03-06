#include <stdio.h>

int main(void)
{
    int digit;
    printf("Enter number: ");
    scanf("%d", &digit);
    for (int i = 1; i*i <= digit; i++) {
        if (i*i%2 == 0) {
            printf("%d\n", i*i);
        }
    }
}

#include <stdio.h>

int main(void) {
    int num1, num2, temp_1, temp_2, r, gcd;
    printf("Enter a fraction: ");
    scanf("%d/%d", &num1, &num2);
    temp_1 = num1;
    temp_2 = num2;
    for (;;){
        r = num1%num2;
        if ( r == 0 ) {
            gcd = num2;
            break;
        }
        num1 = num2;
        num2 = r;
    }
    printf("In lowest: %d/%d", temp_1/gcd, temp_2/gcd);
    return 0;
}

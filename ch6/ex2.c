#include <stdio.h>

int main(void) {
    int num1, num2, r;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    for (;;){
        r = num1%num2;
        if ( r == 0 ) {
            printf("GCD: %d\n", num2);
            break;
        }
        num1 = num2;
        num2 = r;
    }
    return 0;
}

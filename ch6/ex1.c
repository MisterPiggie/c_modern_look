#include <stdio.h>

int main(void) {
    float largest, num;
    for (;;) {
        printf("Enter a number: ");
        scanf("%f", &num);
        if (largest < num) {
            largest = num;
        }
        if (num <=0) {
            printf("The largest number: %f", largest);
            break;
        }
    }
    return 0;
}

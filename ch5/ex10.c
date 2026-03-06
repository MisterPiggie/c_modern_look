#include <stdio.h>



int main(void) {
    int num;

    printf("Enter a numeric grade: ");
    scanf("%d", &num);
    if (num < 0 || num > 100) {
        printf("ERROR");
    }

    switch (num/10) {
        case 10: case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
            printf("F\n");
    }
}

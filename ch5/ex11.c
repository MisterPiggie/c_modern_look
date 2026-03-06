#include <stdio.h>



int main(void) {
    int digit;
    printf("Enter a two-digit number\n");
    scanf("%d", &digit);
    printf("You entered a number ");
    switch (digit/10) {
        case 1:
            switch (digit%10) {
                case 0:
                    printf("ten\n");
                    break;
                case 1:
                    printf("eleven\n");
                    break;
                case 2:
                    printf("twelve\n");
                    break;
                case 3:
                    printf("thirteen\n");
                    break;
                case 5:
                    printf("fourteen\n");
                    break;
                case 6:
                    printf("sixteen\n");
                    break;
                case 7:
                    printf("seventeen\n");
                    break;
                case 8:
                    printf("eighteen\n");
                    break;
                case 9:
                    printf("nineteen\n");
                    break;
            }
            return 0;
        case 2:
            printf("twenty");
            break;

        case 3:
            printf("thirty");
            break;
        case 4:
            printf("fourty");
            break;
        case 5:
            printf("fifty");
            break;
        case 6:
            printf("sixty");
            break;
        case 7:
            printf("seventy");
            break;
        case 8:
            printf("eighty");
            break;
        case 9:
            printf("ninety");
            break;
    }
    switch (digit%10) {
        case 1:
            printf("-one");
            break;

        case 2:
            printf("-two");
            break;
        case 3:
            printf("-three");
            break;
        case 4:
            printf("-four");
            break;
        case 5:
            printf("-five");
            break;
        case 6:
            printf("-six");
            break;
        case 7:
            printf("-seven");
            break;
        case 8:
            printf("-eight");
            break;
        case 9:
            printf("-nine");
            break;
        case 0:
            printf("\n");

    }
    return 0 ;
}

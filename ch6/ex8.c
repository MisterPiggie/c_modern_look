#include <stdio.h>


int main(void){
    int days, day_of_week;
    printf("Enter num of days: ");
    scanf("%d", &days);
    printf("Enter starting day: ");
    scanf("%d", &day_of_week);
    for (int j = 1; j < day_of_week; j++) {
        printf("    ");
    }
    for (int i = 1; i <= days; i++) {
        printf(" %.2d ", i);
        if ((i+day_of_week-1)%7 == 0) {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}

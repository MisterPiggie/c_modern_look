#include <stdio.h>
int main(void) {
    int d, il, i2, i3, i4, i5, jl, j2, j3, j4, j5, first_sum, second_sum, total;
    printf("Enter the first 11 digit: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &il, &i2, &i3, &i4, &i5, &jl, &j2, &j3, &j4, &j5);
    first_sum = d + i2 + i4 + jl + j3 + j5;
    second_sum = il + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;
    if (9 - ((total - 1) % 10) == 5)
    {
        printf("VALID");
    } else 
    {
        printf("NOT VALID");
    }
    return 0;
}

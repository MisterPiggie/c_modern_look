#include <stdio.h>


int main(void)
{
    int int1, int2, int3, int4, int5, int6, int7, int8, int9, int10, int11, int12, int13, int14, int15, int16;
    printf("Enter  numbers from I to 16 (in any order): ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &int1, &int2, &int3, &int4, &int5, &int6, &int7, &int8, &int9, &int10, &int11, &int12, &int13, &int14, &int15, &int16);

    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n", int1, int2, int3, int4, int5, int6, int7, int8, int9, int10, int11, int12, int13, int14, int15, int16);
    printf("Row sum: %2d %2d %2d %2d", int1+int2+int3+int4, int5+int6+int7+int8, int9+int10+int11+int12, int13+int14+int15+int16);
    printf("Column sum: %2d %2d %2d %2d", int1+int5+int9+int13, int2+int6+int10+int14, int3+int7+int11+int15, int4+int8+int12+int16);
    printf("Diagonal sum: %2d %2d)", int1 + int6 + int11 + int16, int4 + int7 + int10 + int13);
     
    return 0;
}

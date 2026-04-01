
#include <stdio.h>
unsigned short swap_bytes(unsigned short i);

int main(void)
{
    unsigned short num;
    printf("Enter a hexadecimal number (up to for digits): ");
    scanf("%hx", &num);
    printf("Number with bytes swapped: %hx\n", swap_bytes(num));
    return 0;
}


unsigned short swap_bytes(unsigned short i)
{
    unsigned short low_bits = i >> 8;
    unsigned short high_bits = i << 8;
    // return i >> 8 | i << 8;
    return high_bits | low_bits;
}

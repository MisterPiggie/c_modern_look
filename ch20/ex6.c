
#include <stdio.h>
unsigned short swap_bytes(unsigned short i);

int main(void)
{
    unsigned short num;
    printf("Enter a hexadecimal number (up to for digits): ");
    scanf("%hx", &num);
// 1111 
    printf("Number with bytes swapped: %hx\n", num);
    return 0;
}

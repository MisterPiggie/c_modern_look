#include <stdio.h>

int main(void)
{
    int num, octal1, octal2, octal3, octal4, octal5;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);
    octal1 = num%8; num /= 8;
    octal2 = num%8; num /= 8;
    octal3 = num%8; num /= 8;
    octal4 = num%8; num /= 8;
    octal5 = num%8; num /= 8;
    printf("The ocatal is: %d%d%d%d%d",octal5, octal4, octal3, octal2, octal1); 
}

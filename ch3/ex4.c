#include <stdio.h>


int main(void)
{
    int group1, group2, group3;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &group1, &group2, &group3);

    printf("%d.%d.%d", group1, group2, group3);
     
    return 0;
}

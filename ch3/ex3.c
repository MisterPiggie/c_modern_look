#include <stdio.h>


int main(void)
{
    int gs1, group_ident, publisher_code, item_num, check_digit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d",&gs1, &group_ident, &publisher_code, &item_num, &check_digit);

    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck edit: %d\n", gs1, group_ident, publisher_code, item_num, check_digit);
     
    return 0;
}

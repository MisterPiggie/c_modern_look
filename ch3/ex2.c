#include <stdio.h>


int main(void)
{
    int item_num, month, day, year;
    float price;
    printf("Enter item number: ");
    scanf("%d", &item_num);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\t\n");
    printf("\tPrice\tDate\t\n");
    printf("%-d\t$%6.2f\t%d/%d/%d\t\n", item_num, price, month, day, year);
     
    return 0;
}

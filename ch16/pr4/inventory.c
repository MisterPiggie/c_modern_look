#include <stdio.h>
#include "readline.h"


#define NAME_LEN 25
#define MAX_PARTS 100


struct part 
{
    int number;
    char name[NAME_LEN+1];
    int on_hand;
    int price;
};



int find_parts(int number, struct part inventory[], int num_parts);
void insert(struct part inventory[], int *num_parts);
void search(struct part inventory[], int num_parts);
void update(struct part inventory[], int num_parts);
void update_price(struct part inventory[], int num_parts);
void print(struct part inventory[], int num_parts);


int main(void)
{
    char code;
    int num_parts = 0;
    struct part inventory[MAX_PARTS];   
    for(;;)
    {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        switch (code) {
            case 'i': insert(inventory, &num_parts);
                      break;
            case 's': search(inventory, num_parts);
                      break;
            case 'u': update(inventory, num_parts);
                      break;
            case 'p': print(inventory, num_parts);
                      break;
            case 'q': return 0;
            default: printf("Illegal code\n");
        }
        printf("\n");
    }
}


int find_parts(int number, struct part inventory[], int num_parts)
{
    int i;
    for (i = 0; i < num_parts; i++)
    {
        if (inventory[i].number == number)
            return i;
    }
    return -1;
}


void insert(struct part inventory[], int *num_parts)
{
    int part_number;

    if (*num_parts == MAX_PARTS) 
    {
        printf("Datebase is full; cant add more parts \n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &part_number);

    if (find_parts(part_number, inventory, *num_parts) >= 0)
    {
        printf("Part already exists");
        return;
    }

    inventory[*num_parts].number = part_number;

    printf("Enter part name: ");
    read_line(inventory[*num_parts].name, NAME_LEN);

    printf("Enter quantity on hand: ");
    scanf("%d", &inventory[*num_parts].on_hand);
    printf("Enter price: ");
    scanf("%d", &inventory[*num_parts].price);

    *num_parts += 1;
}



void search(struct part inventory[], int num_parts)

{
    int i, number;
    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_parts(number, inventory, num_parts);
    if (i >= 0)
    {
        printf("Part name: %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);
        printf("Price of item %d$\n", inventory[i].price);
    } else
        printf("Part not found.\n");
}

void update(struct part inventory[], int num_parts)
{
    int i, number, change;
    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_parts(number, inventory, num_parts);
    if (i >= 0)
    {
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        inventory[i].on_hand += change;
    } else
        printf("Part not found.\n");
}

void update_price(struct part inventory[], int num_parts)
{
    int i, number, change;
    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_parts(number, inventory, num_parts);
    if (i >= 0)
    {
        printf("Enter change in price: ");
        scanf("%d", &change);
        inventory[i].price += change;
    } else
        printf("Part not found.\n");
}

void print(struct part inventory[], int num_parts)

{
    int i;
    if (num_parts == 0)
    {
        printf("No entries in database.");
        return;
    }
    printf("Part Number  Part Name              Quantity on Hand\n");
    for (i = 0; i < num_parts; i++)
        printf("%7d       %-25s%11d%7d$\n", inventory[i].number, inventory[i].name, inventory[i].on_hand, inventory[i].price);
}

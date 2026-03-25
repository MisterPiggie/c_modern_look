#include <stdio.h>
#include <stdlib.h>
#include "readline.h"


#define NAME_LEN 25


struct part 
{
    int number;
    char name[NAME_LEN+1];
    int on_hand;
};


int max_parts = 10;

int find_parts(int number, struct part inventory[], int num_parts);
void insert(struct part inventory[], int *num_parts);
void search(struct part inventory[], int num_parts);
void update(struct part inventory[], int num_parts);
void print(struct part inventory[], int num_parts);
int compare_parts(const void *p, const void *q);


int main(void)
{
    char code;
    int num_parts = 0;
    struct part *inventory = malloc(sizeof(struct part) * max_parts);   
    if (inventory == NULL)
    {
        printf("ERROR: not enough memory\n");
        exit(EXIT_FAILURE);
    }
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

    if (*num_parts == max_parts)
    {
        max_parts *= 2;
        inventory = realloc(inventory, sizeof(struct part) * max_parts); 
        if (inventory == NULL)
        {
            printf("ERROR: not enough memory for realoc\n");
            exit(EXIT_FAILURE);
        }
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

void print(struct part inventory[], int num_parts)

{
    int i;
    if (num_parts == 0)
    {
        printf("No entries in database.");
        return;
    }
    qsort(inventory, num_parts, sizeof(inventory[0]), compare_parts);
    printf("Part Number  Part Name              Quantity on Hand\n");
    for (i = 0; i < num_parts; i++)
        printf("%7d       %-25s%11d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand);
}

int compare_parts(const void *p, const void *q)
{
    return ((struct part *)p) -> number - ((struct part *)q) -> number; 
}

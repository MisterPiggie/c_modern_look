#include <stdio.h>


int main(void)
{
    int one, two, three, four, smallest, largest;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &one, &two, &three, &four);

    if (one >= two) {
        smallest = two;
        largest = one;
    } else 
    {
        smallest = one;
        largest = two;
    }
    if (smallest > three) 
    {
        smallest = three;
    } else if (largest < three) 
    {
        largest = three;
    }

    if (smallest > four) 
    {
        smallest = four;
    } else if (largest < four) 
    {
        largest = four;
    }
    
    printf("Largest: %d and Smallest: %d\n", largest, smallest);
    return 0;
}

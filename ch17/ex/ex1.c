#include <stdio.h>
#include <stdlib.h>
void *my_malloc(int n)
{
    void *p;
    p = malloc(n);
    if (p == NULL)
    {
        printf("ERROR: null pointer");
        exit(EXIT_FAILURE);
    }
    return p;
}

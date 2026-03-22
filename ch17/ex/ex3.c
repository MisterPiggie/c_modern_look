#include <stdlib.h>
#include <stdio.h>

int *create_array (int n, int initial_value)
{
    int *a;
    int *result = malloc(n * sizeof(int));
    if (result == NULL)
    {
        printf("ERROR: null pointer");
        exit(EXIT_FAILURE);
    }
    for (a = result; a < result + n; a++)
    {
        *a = initial_value;
    }

    return result;
}

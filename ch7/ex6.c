#include <stdio.h> 

int main(void)
{
    printf("%zu %zu %zu %zu %zu %zu",
        sizeof(int), sizeof(short), sizeof(long), sizeof(float), sizeof(double), sizeof(long double));
    return 0;
}

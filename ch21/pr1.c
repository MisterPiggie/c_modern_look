#include <stddef.h>
#include <stdio.h>
struct s {
    char a;
    int b[2];
    float c;
};


void print_offsets( struct s sP);

int main(void)
{
    struct s sP;
    print_offsets(sP);
    return 0;
}


void print_offsets( struct s sP)
{
   printf("Size of struct: %lu\n", sizeof(sP));
   printf("Size of element a: %lu. Offset of element a: %lu\n", sizeof(sP.a), offsetof(struct s, a));
   printf("Size of element b: %lu. Offset of element a: %lu\n", sizeof(sP.b), offsetof(struct s, b));
   printf("Size of element c: %lu. Offset of element a: %lu\n", sizeof(sP.c), offsetof(struct s, c));
}

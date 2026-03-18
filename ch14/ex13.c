#include <stdio.h>

#define N 100

void f(void)
{
#if defined(N)
    printf("N is %d\n", N);
#else
    printf("N is undefined\n");
#endif
}

int main(void)
{
    f();
#ifdef N
#undef N
#endif
    return 0;
}



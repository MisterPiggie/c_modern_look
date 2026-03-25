#include <stdio.h>
#include "stackADT.h"

int main(void)
{
    Stack sl, s2;
    int n;

    sl = create ();
    s2 = create ();

    push(sl, 1);
    push(sl, 2);

    n = pop(sl);
    printf("Popped %d from sl\n", n);
    push(s2, n);
    n = pop(sl) ;
    printf("Popped %d from sl\n", n);
    push(s2, n) ;

    destroy(sl);

    while (!is_empty(s2))
        printf("Popped %d from s2\n", pop(s2));

    push(s2, 3);
    make_empty(s2);
    if (is_empty(s2))
        printf("s2 is empty\n");
    else
        printf("s2 is not empty\n");

    destroy(s2);

    return 0;
}

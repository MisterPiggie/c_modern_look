#include <stdio.h>
#include "stackADT.h"

int main(void)
{
    Stack sl, s2;
    Item n;

    sl = create ();
    s2 = create ();
    Item str1 = "Hello";
    Item str2 = ", World";
    Item str3 = "!";
    push(sl, str1);
    push(sl, str2);
    printf("Length of s1 = %d\n", length(sl));

    n = pop(sl);
    printf("Popped %s from sl\n", (char*) n);
    push(s2, n);
    n = pop(sl) ;
    printf("Popped %s from sl\n", (char*) n);
    push(s2, n) ;


    printf("Length of s2 = %d\n", length(s2));
    destroy(sl);

    while (!is_empty(s2))
        printf("Popped %s from s2\n", (char*) pop(s2));

    push(s2, str3);
    make_empty(s2);
    if (is_empty(s2))
        printf("s2 is empty\n");
    else
        printf("s2 is not empty\n");

    destroy(s2);

    return 0;
}

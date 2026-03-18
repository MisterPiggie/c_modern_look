
#include <stdio.h>
#define SPANISH


int main(void)
{
#ifdef ENGLISH
    printf("Insert Disk 1");
#endif
#ifdef FRENCH
    printf("Inserez Le Disque 1");
#endif
#ifdef SPANISH
    printf("Inserte El Disco 1");
#endif

}

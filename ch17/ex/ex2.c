
#include <stdlib.h>
#include <string.h>
char *duplicate(char *str)
{
    char *temp = malloc(strlen(str) + 1);

    if (temp == NULL)
        return NULL;

    strcpy(temp, str);
    return temp;
}

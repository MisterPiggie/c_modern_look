

#include <ctype.h>
void capitalize( char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (isalpha(str[i]))
            str[i] = toupper(str[i]);
        i++;
    }
}

void capitalize_b( char *str) 
{
    while (*str != '\0')
    {
        if (isalpha(*str))
            *str = toupper(*str);
        str++;
    }
}

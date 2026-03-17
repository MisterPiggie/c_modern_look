#include <stdio.h>

void reverse_name(char *name);
int read_line(char str[], int n);

int main(void) 
{
    char name[81];

    printf("Enter a first and last name: ");
    read_line(name, 80);
    reverse_name(name);
    printf("%s", name);
}



int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0'; 
    return i;
}



void reverse_name(char *name)
{
    char *p = name, initial;


    while (*p == ' ') 
        p++;
    initial = *p;

    while (*p != ' ' && *p != '\0')
        p++;
    while (*p == ' ')
        p++;
    while (*p != ' ' && *p != '\0')
    {
        *name++ = *p++;
    }
    *name++ = ',';
    *name++ = ' ';
    *name++ = initial;
    *name++ = '.';
    *name++ = '\0';
}

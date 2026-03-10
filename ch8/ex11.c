#include <ctype.h>
#include <stdio.h>



int main(void) 
{
    char ch, a[15];
    int i = 0;
    printf("Enter a phone number : ");
    ch = getchar();
    while (ch != '\n')
    {
        switch (toupper(ch)) {

            case 'A': case 'B': case 'C' : 
                a[i++] = '2'; break;
            case 'D': case 'E': case 'F' : 
                a[i++] = '3'; break;
            case 'G': case 'H': case 'I' : 
                a[i++] = '4'; break;       
            case 'J': case 'K': case 'L' : 
                a[i++] = '5'; break;
            case 'M': case 'N': case 'O' : 
                a[i++] = '6'; break;
            case 'P': case 'R': case 'S' : 
                a[i++] = '7'; break;
            case 'T': case 'U': case 'V' : 
                a[i++] = '8'; break;
            case 'W': case 'X': case 'Y' : 
                a[i++] = '9'; break;
            default:
                a[i++] = ch;
        }
        ch = getchar();
    }
    for (i = 0; i < 15 ; i++) 
    {
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}

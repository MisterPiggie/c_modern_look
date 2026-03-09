#include <ctype.h>
#include <stdio.h>




int main(void)
{
    char ch;
    int count;
    ch = getchar();

    while(ch != '\n') 
    {
        switch (tolower(ch))
        {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                count++;
                break;
        }
        ch = getchar();
    }
    printf("Your sentance contains %d vowels", count);
    return 0;
}

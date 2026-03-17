#include <ctype.h>
#include <stdio.h>


int compute_vowels_count(const char *sentance);

int main(void)
{
    char sentence[81], *p = sentence, ch;

    printf("Enter your sentence: ");
    while ((ch = getchar()) != '\n' && p < sentence + 80) {
        *p++ = ch;
    }
    *p = '\0';

   printf("Your sentance contains %d vowels", compute_vowels_count(sentence));
    return 0;
}


int compute_vowels_count(const char *sentance)
{
    int count = 0;
    while(*sentance) 
    {
        switch (tolower(*sentance++))
        {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                count++;
                break;
        }
    }
    return count;
}
 

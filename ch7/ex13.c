#include <stdio.h>


int main(void) 
{
    float num_letters;
    int num_words = 1;
    char ch;
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n')
    {
        if ( ch == ' ' ) 
        {
            num_words++;
        } else
        {
            num_letters++;
        }
    }
    printf("Average word length: %f", num_letters/num_words);
    return 0;
}

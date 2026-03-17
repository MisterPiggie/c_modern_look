#include <stdio.h>

double compute_average_word_length(const char *sentence);
int read_line(char str[], int n);

int main(void) 
{
    char sentence[81];
    printf("Enter a sentence: ");
    read_line(sentence, 80);
    printf("Average word length: %f", compute_average_word_length(sentence));
    return 0;
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


double compute_average_word_length(const char *sentence)
{
    double num_letters = 0;
    int num_words = 1;

    while (*sentence == ' ') {
        sentence++; 
    }

    while(*sentence)
    {
        if (*sentence != ' ' )
        {
            sentence++;
            num_letters++;
        }
        else 
        {
            num_words++;
            while (*sentence == ' ' && *sentence != '\0')
                sentence++;
        }
    }
    return num_letters/num_words;
}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MSG_LEN 20
int max_words = 10;
int read_line(char str[], int n);
int compare(const void *p, const void *q);

int main(void)
{
    char *words[max_words], buffer[MSG_LEN + 1]; 
    int i, size = 1, num_words = 0;

    for (;;)
    {
        printf("Enter a word: ");
        if (read_line(buffer, MSG_LEN) == 0)
            break;

        if (num_words == max_words)
            break;
        words[num_words] = malloc(strlen(buffer));
        if (words[num_words] == NULL)
        {
            printf("ERROR: malloc");
            exit(EXIT_FAILURE);
        }
        strcpy(words[num_words], buffer);
        num_words++;
    }

    qsort(words, num_words, sizeof(char *), compare);

    printf("In sorted order: ");
    for (i = 0; i < num_words; i++)
    {
        printf(" %s", words[i]);
    }

    printf("\n");



    return 0;
}



int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar())!= '\n' && ch != EOF)
    {
        if (i < n)
        {
            str[i++] = ch;
        }
    }

    str[i] = '\0';
    return i;
}

int compare(const void *p, const void *q)
{
    return strcmp(*(const char **)p, *(const char **)q);
}

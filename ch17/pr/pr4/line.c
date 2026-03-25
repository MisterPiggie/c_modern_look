#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "line.h"

#define MAX_LINE_LEN 60

int line_len = 0;
int num_words = 0;

struct node
{
    struct node *next;
    char word[];
} *line = NULL;
void clear_line()
{
    struct node *to_free;

    while(line != NULL)
    {
        to_free = line;
        line = line -> next;
        free(to_free);
    }
    line_len = 0;
    num_words = 0;
}

void add_word(const char *word)
{
    struct node *new_word, **pp = &line;
    if ((new_word = malloc(sizeof(struct node) + strlen(word) + 1)) == NULL)
    {
        printf("ERROR: not enough memory for malloc");
        exit(EXIT_FAILURE);
    }
}

int space_remaining(void)
{
    return MAX_LINE_LEN - line_len;
}


void write_line(void)
{
    int extra_spaces, spaces_to_insert, i, j;
    spaces_toggle = !spaces_toggle;

    extra_spaces = MAX_LINE_LEN - line_len;
    for (i = 0; i < line_len; i++)
    {
        if (line[i] != ' ')
            putchar(line[i]);
        else {
            spaces_to_insert = extra_spaces / (num_words-1);
            if (spaces_toggle && extra_spaces > 0)
            {
                spaces_to_insert++;
                spaces_toggle = !spaces_toggle;
            }
            for (j = 1; j <= spaces_to_insert + 1; j++)
                putchar(' ');
            extra_spaces -= spaces_to_insert;
            num_words--;
        }
    }
    putchar('\n');
}

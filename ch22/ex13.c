#include <stdio.h>
#include <stdlib.h>

int line_length(const char *filename, int n)
{
    FILE *fp;
    int length = 0, ch;
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        fprintf(stderr, "ERROR:  Couldnt  open file %s\n", filename);
        exit(EXIT_FAILURE);
    }

    while (--n)
    {
        if (fscanf(fp, "%*[^\n]") == EOF)
            return length;
        getc(fp);
    }

    while ((ch = getc(fp)) != EOF)
    {
        if (ch == '\n')
            break;
        length++;
    }
    fclose(fp);
    return length;
}

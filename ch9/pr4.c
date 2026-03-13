#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>


void read_word(int counts[26]);
bool equal_arrays(int counts1[26], int counts2[26]);
int main(void)
{
    char ch;
    int word1[26] = {0}, word2[26] = {0};
    printf("Enter first word: ");
    read_word(word1);
    printf("Enter second word: ");
    read_word(word2);
    if (equal_arrays(word1, word2)) 
    {
        printf("The words are anagrams\n");
        return 0;

    }
    printf("The words are not anagrams\n");
    return 0;
}


void read_word(int counts[26]){
    char ch;
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) 
        {
            counts[toupper(ch) - 'A'] -= 1;
        }
    }
    return;
}

bool equal_arrays(int counts1[26], int counts2[26])
{
    for (int i = 0; i < 26; i++){
        if (counts1[i] != counts2[i]) return false;
    }
    return true;
}

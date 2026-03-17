#include <stdio.h>

char *number[] = {"twenty", "thirty", "forty", "fifty", "sixty",
    "seventy", "eighty", "ninety"};
char *number_two[] = {"", "-one", "-two", "-three", "-four", "-five",
    "-six", "-seven", "-eight", "-nine"};
char *tens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fiveteen",
    "sixteen", "seventeen", "eighteen", "nineteen"};


int main(void) {
    int digit;
    printf("Enter a two-digit number\n");
    scanf("%d", &digit);
    if (digit/10 == 1)
    {
        printf("You entered a number %s\n", tens[digit%10]);
        return 0;
    }
    printf("You entered a number %s%s\n", number[digit/10-2], number_two[digit%10]);
    return 0;
}


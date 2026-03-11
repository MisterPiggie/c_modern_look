
#include <stdio.h>
int digit(int n, int k) 
{
    int repetions = 0, temp;
    temp = n;
    while (temp > 0) {
        repetions++;
        temp /= 10;
    }
    if (repetions < k)
    {
        return 0;
    }
    while (k > 1) 
    {
        n /= 10;
        k--;
    }
    return n % 10;
}

int main(void)
{
    printf("%d", digit(832, 1));
}

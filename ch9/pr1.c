#include <stdio.h>

void selection_sort(int a[], int n);

int main(void)
{
    int n, a[n], i;
    printf("Enter a number of ints: ");
    scanf("%d", &n);
    printf("Enter a series of ints: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    selection_sort(a, n);
    return 0;
}



void selection_sort(int a[], int n)
{
    if (n == 1)
        return;

    int max_val = a[0], max_i, i;
    for (i = 1; i < n; i++)
    {
        if (a[i] > max_val){
            max_val = a[i];
            max_i = i;
        }
    }
    a[max_i] = a[n-1];
    a[n-1] = max_val;

    selection_sort(a, n-1);
}

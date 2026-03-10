#include <stdio.h>

int main(void)
{
    int a[5][5], max, min;
    float sum;
    for (int row = 0; row < 5; row++) 
    {
        printf("Enter grades of quiz %d: ", row+1);
        scanf("%d %d %d %d %d", &a[row][0],&a[row][1],&a[row][2],&a[row][3],&a[row][4]);
    }
 
    for (int row = 0; row < 5; row++) 
    {
        max = a[row][0];
        min = a[row][0];
        sum = 0;
        for (int col = 0; col < 5; col++)
        {
            sum += a[row][col];
            if (a[row][col] > max)
            {
                max = a[row][col];
            }
            if (a[row][col] < min)
            {
                min = a[row][col];
            }
        }
        printf("Quiz %d: Average = %f, Highest score = %d, Lowest Score = %d\n", row+1, sum/5.0, max, min); 
    }
    
    for (int col = 0; col < 5; col++) 
    {
        sum = 0;
        for (int row = 0; row < 5; row++)
        {
            sum += a[row][col];
        }
        printf("Student %d: Average = %f, Total = %d\n",col + 1, sum/5.0, (int) sum);
    }

}



int largest_element(int a[], int n)
{
    int max = a[0];
    for ( int i = 1; i < n; i++) 
    {
        if (a[n] > max) 
        {
            max = a[n];
        }
    }
    return max;
}


int average(int a[], int n)
{
    int sum;
    for ( int i = 0; i < n; i++) 
    {
        sum += a[0];
    }
    return sum/n;
}


int num_of_pos(int a[], int n)
{
    int num;
    for ( int i = 0; i < n; i++) 
    {
        if (a[n] > 0)
        {
            num++;
        }
    }
    return num;
}

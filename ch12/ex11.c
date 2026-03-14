
int find_largest(int a[], int n)
{
    int *p, max;

    max = *a;
    for ( p = a; p < (a + n); p++)
    {
        if (max < *p)
            max = *p;
    }
    return max;
}

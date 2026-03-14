int *find_largest(int a[],  int n)
{
    int *pmax, i;
    pmax = &a[0];
    for ( i = 1; i < n; i++)
    {
       if (a[i] > *pmax)
       {
           pmax = &a[i];
       }
    }

    return pmax;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    const int *p = a;
    *largest = *p;
    *second_largest = *(++p);
    for (; p < (a+n) ; p++)
    {
       if (*p > *largest)
       {
           *second_largest = *largest;
           *largest = *p;
       }
       if (*p > *second_largest && *p != *largest)
           *second_largest = *p;
    }
}



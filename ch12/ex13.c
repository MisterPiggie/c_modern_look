

void indent(int n, double a[n][n])
{
    double *p = a[0];
    int zeros = n;


    while (p++ < a[0] + n * n)
    {
        if (zeros == n)
        {
            *p = 1;
            zeros = 0;
        } else
        {
            *p = 0;
            zeros++;
        }
    }
}


double inner_product (const double *a, const double *b, int n)
{
    const double *p, *q;
    double sum = 0.0;
    for (p = a, q = b; p < a + n; p++, q++)
    {
        sum += *p * *q;
    }
    return sum;
}



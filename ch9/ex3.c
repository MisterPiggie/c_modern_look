
int gcd(int m, int n) 
{
    int r;
    for (;;){
        r = m%n;
        if ( r == 0 ) {
            return r;
        }
        m = n;
        n = r;
    }
    return 0;
}

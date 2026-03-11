
int num_digits(int n) 
{
    int repetions = 0;
    while (n > 0) {
        repetions++;
        n /= 10;
    }
    return n;
}


int count_ones(unsigned char ch)
{
    int count = 0, i;
    for ( i = 0; i < 8; i++){
        if ((ch >> i) & 1) {
            count++;
        }
    }
    return count;
}

int count_ones_no_loop(unsigned char ch)
{
    int count = 0;
    while (ch > 0)
    {
        if (ch & 1)
            count++;
        ch = ch >> 1;
    }
    return count;
}


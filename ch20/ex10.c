unsigned int reverse_bits(unsigned int n)
{
    unsigned int result = 0;
    int i;

    for (i = 0; i < 32; i++)
    {
        result = (result << 1) | (n & 1);
        n >>= 1;
    }
    return result;
}

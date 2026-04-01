
unsigned int rotate_left(unsigned int i, int n)
{
    return i << n | ( i >> (sizeof(i) * 8 - n));
}

unsigned int rotate_right(unsigned int i, int n)
{
    return i >> n | ( i << (sizeof(i) * 8 - n));
}

#include <stdio.h>

void split_time(int total_sec, int n, int *hr, int *min, int *sec)
{
    *sec = total_sec % 60;
    total_sec /= 60;
    *min = total_sec % 60;
    total_sec /= 60;
    *hr = total_sec % 24;
}

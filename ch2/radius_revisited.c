#include <stdio.h>

#define PI 3.14159
#define FRACTION 4.0f/3.0f


int main(void)
{
    int radius;
    float volume;
    printf("Radius = ");
    scanf("%d", &radius);
    volume = FRACTION * PI * radius * radius * radius;

    printf("volume with radius 10 = %.2f\n", volume);

    return 0;
}

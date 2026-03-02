#include <stdio.h>


int main(void)
{
    int height, length, width, volume, weight;

    printf("Endter height of box: ");
    scanf("%d", &height);
    printf("Endter length of box: ");
    scanf("%d", &length);
    printf("Endter width of box: ");
    scanf("%d", &width);

    volume = height * length * width;

    weight = (volume + 165) / 166;

    printf("dimensons: %dx%dx%d\n", height, length, width);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight rounded up: %d\n", weight);

    return 0;
}

#include <stdio.h>
typedef struct {
    unsigned int fraction: 23;
    unsigned int exponent: 8;
    unsigned int sign: 1;
}IEEE_float;

union {
    float value;
    IEEE_float value_struct;
} float_union;

int main(void)
{
    float_union.value_struct.sign= 1;
    float_union.value_struct.exponent = 128;
    float_union.value_struct.fraction = 0;

    printf("Union float = %.1f", float_union.value);
}

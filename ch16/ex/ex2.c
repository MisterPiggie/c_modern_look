
struct 
{
    double real;
    double imaginary;
} c1 = { .real = 0.0, .imaginary = 1.0 }, 
    c2 = { .real = 1.0, .imaginary = 0.0}, 
    c3;


int main(void)
{
    c1 = c2;
    c3.real = c1.real + c2.real;
    c3.real = c1.imaginary + c2.imaginary;
}

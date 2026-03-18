
struct complex
{
    double real;
    double imaginary;
}; 
struct complex c1 = { .real = 0.0, .imaginary = 1.0 };
struct complex c2 = { .real = 1.0, .imaginary = 0.0}; 
struct complex c3;

struct complex make_complex(double real, double imaginary)
{
    return (struct complex) { .real = real, .imaginary = imaginary };
}

struct complex add_complex(struct complex num1, struct complex num2)
{
    return (struct complex) { num1.real + num2.real, num1.imaginary + num2.imaginary };
}

int main(void)
{
    c1 = c2;
    c3.real = c1.real + c2.real;
    c3.real = c1.imaginary + c2.imaginary;
}

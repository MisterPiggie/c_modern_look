
struct Complex
{
    double real;
    double imaginary;
}; 
struct Complex c1 = { .real = 0.0, .imaginary = 1.0 };
struct Complex c2 = { .real = 1.0, .imaginary = 0.0}; 
struct Complex c3;

struct Complex make_complex(double real, double imaginary)
{
    return (struct Complex) { .real = real, .imaginary = imaginary };
}

struct Complex add_Complex(struct Complex num1, struct Complex num2)
{
    return (struct Complex) { num1.real + num2.real, num1.imaginary + num2.imaginary };
}

int main(void)
{
    c1 = c2;
    c3.real = c1.real + c2.real;
    c3.real = c1.imaginary + c2.imaginary;
}

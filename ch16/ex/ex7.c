


#include <stdnoreturn.h>
struct fraction {
    int numerator;
    int denominator;
};

struct fraction lowest_form(struct fraction f)
{
    int r;
    for (;;){
        r = f.numerator%f.denominator;
        if ( r == 0 ) {
            f.numerator /= f.denominator;
            f.denominator/= f.denominator;
            return f;
        }
        f.numerator = f.denominator;
        f.denominator = r;
    }
}

struct fraction add_fractions(struct fraction f1, struct fraction f2)
{
    f1 = lowest_form(f1);
    f2 = lowest_form(f2);
    f1.numerator *= f2.denominator;
    f2.numerator *= f1.denominator;
    f1.numerator += f2.numerator;
    f1.denominator *= f2.denominator;
    return f1;
}

struct fraction subtract_fractions(struct fraction f1, struct fraction f2)
{
    f1 = lowest_form(f1);
    f2 = lowest_form(f2);
    f1.numerator *= f2.denominator;
    f2.numerator *= f1.denominator;
    f2.numerator -= f1.numerator;
    f1.denominator *= f2.denominator; 
    return f2;
}


struct fraction myltiply_fractions(struct fraction f1, struct fraction f2)
{
    f1 = lowest_form(f1);
    f2 = lowest_form(f2);
    f1.numerator *= f2.numerator;
    f1.denominator *= f2.denominator; 
    return f1;
}

struct fraction divide_fractions(struct fraction f1, struct fraction f2)
{
    f1 = lowest_form(f1);
    f2 = lowest_form(f2);
    f1.numerator *= f2.denominator;
    f1.denominator *= f2.numerator; 
    return f1;
}

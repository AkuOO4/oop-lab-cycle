#include <iostream>
using namespace std;

class complex
{
    float r, i;
public:
    void input(float real , float imag)
    {
        r = real;
        i = imag;
    }
    friend complex sum(complex, complex);
    void show(void);
};

complex sum(complex c2, complex c1)
{
    complex c3;
    c3.r = c1.r + c2.r;
    c3.i = c2.i + c1.i;
    return c3;
}

void complex::show(void)
{
    cout << r << "+ " << i << "i\n";
}
int main()
{
    complex a, b, c;
    a.input(5.2, 2.1);
    a.show();
    b.input(2.8, -1.1);
    b.show();
    c = sum(a, b);
    cout << "after addition \n";
    c.show();
}

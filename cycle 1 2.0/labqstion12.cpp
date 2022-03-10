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
    cout <<"\t"<< r << "+ " << i << "i\n";
}
int main()
{
    float r1,r2,i1,i2;
    complex a, b, c;
    cout<<"enter 1st complex number\n";
    cout<<"real part and imaginery \n";
    cin>>r1>>i1;
    a.input(r1,i1);
    a.show();
    cout<<"enter 2st complex number\n";
    cout<<"real part and imaginery \n";
    cin>>r2>>i2;
    b.input(r2,i2);
    b.show();
    c = sum(a, b);
    cout << "complex numbers after addition \n";
    c.show();
}

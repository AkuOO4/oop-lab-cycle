#include <iostream>
using namespace std;

class Complex
{
    int real, imag;
public:
    Complex(){};
    Complex(int r, int i)
    {
        real = r, imag = i;
    }
    void show(void)
    {
        cout <<real << " + " << imag << "i\n";
    }
    friend Complex operator +(Complex, Complex);
    friend Complex operator *(Complex, Complex);
};
Complex operator +(Complex a1, Complex a2)
{
    Complex s(a1.real + a2.real, a1.imag + a2.imag);
    return s;
}
Complex operator *(Complex a1, Complex a2)
{
    Complex pro((a1.real * a2.real - a1.imag * a2.imag), (a1.real * a2.imag + a2.real * a1.imag));
    return pro;
}

int main()
{
    int r1, r2, i1, i2;
    cout << "\nComplex No.1\nEnter the real and imaginery number";
    cin >> r1>> i1;
    cout << "\nComplex No.2\nEnter the real and imaginery number";
    cin >> r2>>i2;
    Complex s1(r1,i1), s2(r2, i2);
    cout << "\nSum\n";
    Complex sum=s1 + s2;
    sum.show();
    Complex pro = s2 * s2;
    cout << "\nProduct\n";
    pro.show();
}

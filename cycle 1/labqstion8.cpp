#include<iostream>
using namespace std;

class complex 
{
    float real;
    float imag;
public:
    complex(void) {};
    complex(float a)
    {
        real = imag = a;
    }
    complex(float x, float y)
    {
        real = x;
        imag = y;
    }
    void show(void) 
    {
        if (imag >= 0) 
            cout << real << " + " << imag << " i" "\n";
        
        else 
        cout << real << " - " << (-1) * imag << " i" "\n"; 

    }
    friend complex add(complex, complex);
};

complex add(complex a, complex b) 
{
    complex C;
    C.real = a.real + b.real;
    C.imag = a.imag + b.imag;
    return C;
}


int main()
{
    complex x = complex(5, 6);
    complex y = complex(-4);
    complex Z;
    Z = add(x, y);
    cout << "x = ";
    x.show();
    cout << "y = ";
    y.show();
    cout << "z = ";
    Z.show();
}
//3. Write a C++ program to overload operators like *, <<, >> using friend
//function.The following overloaded operators should work for a class vector.

#include<iostream>
using namespace std;

class Vector
{
    float i, j, k;
public:
    friend float operator*(Vector, Vector);
    friend ostream& operator<<(ostream& output, const Vector& v) 
    {
        output << v.i << "i + " << v.j << "j + " << v.k << "k\n";
        return output;
    }
    friend istream& operator>>(istream& input, Vector& v) 
    {
        input >> v.i >> v.j >> v.k;
        return input;
    }
};

float operator*(Vector v1, Vector v2)
{
    float m = (v1.i * v2.i) + (v1.j * v2.j) + (v1.k * v2.k);
    return m;
}


int main()
{
    Vector a, b;
    cout << "Enter the vector A (i j k) : ";
    cin >> a;
    cout << "Enter the vector B: ";
    cin >> b;
    cout << "\nA = " << a << "\n";
    cout << "B = " << b << "\n";
    int c = a * b;
    cout << "Vectors after multiplication = " << c << "\n";
}


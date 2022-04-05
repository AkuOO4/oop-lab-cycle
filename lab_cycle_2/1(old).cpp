#include <iostream>
using namespace std;
class Vector
{
    int vector1;
public:
    Vector(int x) { vector1 = x; }
    void show_data(void){cout << "vector is " << vector1;}
    friend int operator==(Vector,Vector);
    friend int operator!=(Vector, Vector);
    friend int operator<(Vector, Vector);
    friend int operator<=(Vector, Vector);
    friend int operator>(Vector, Vector);
    friend int operator>=(Vector, Vector);

};

int operator==(Vector a,Vector b)
{
    cout << "operator initialised\n";
    if (a.vector1 == b.vector1)
        return 1;
    else
        return 0;
}

int operator!=(Vector a, Vector b)
{
    cout << "\n!= done";
    if (a.vector1 != b.vector1)
        return 1;
    else
        return 0;
}

int operator<(Vector a, Vector b)
{
    cout << "\n< done";
    if (a.vector1 < b.vector1)
        return 1;
    else
        return 0;
}

int operator<=(Vector a, Vector b)
{
    cout << "\n<= done";
    if (a.vector1 <= b.vector1)
        return 1;
    else
        return 0;
}

int operator>(Vector a, Vector b)
{
    cout << "\n> done";
    if (a.vector1 > b.vector1)
        return 1;
    else
        return 0;
}

int operator>=(Vector a, Vector b)
{
    cout << "\n>= done";
    if (a.vector1 >= b.vector1)
        return 1;
    else
        return 0;
}

int main()
{
    Vector v1(10),v2(10);

    if (v1 == v1)
        cout<<"\nv1==v2";
    if (v1 != v2)
        cout << "\nv1!=v2";
    if (v1 > v2)
        cout << "\nv1>v2";
    if (v1 >= v2)
        cout << "\nv1>=v2";
    if (v1 < v2)
        cout << "\nv1<v2";
    if (v1<=v2)
        cout<<"\nv1 <= v2";
}
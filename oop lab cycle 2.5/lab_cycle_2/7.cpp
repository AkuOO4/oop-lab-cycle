#include <iostream>
using namespace std;

class alpha
{
protected:
    int a;
public:
    alpha() { cout << "\ndefault constructor of alpha invoked"; }
    alpha(int x) 
    {
        cout << "\nconstructor of alpha invoked";
        a = x;
    }

};

class beta
{
protected:
    int b;
public:
    beta() { cout << "\ndefualt constructor of beta invoked"; }
    beta(int y)
    {
        cout << "\nconstructor of beta invoked";
        b = y;
    }

};

class gamma : public alpha, public beta
{
protected:
    int c;
public:
    gamma() :alpha(), beta() { cout << "\ndefault constructor of gamma invoked;"; }
    gamma(int x, int y, int z) :alpha(x), beta(y)
    {
        cout << "\nconstructor of gamma invoked ";
        c = z;
    }
    void show(void)
    {
        cout << "\n\nvalue inside alpha is: " << a << endl;
        cout << "value inside beta: " << b << endl;
        cout << "value inside gamma: " << c << endl;
    }


};

int main()
{
    int a, b, c;
    cout << "invoking default constructors\n";
    gamma g;
    cout << "\ninvoking default constructor over\n";
    cout << "\nenter the values for alpha,beta and gamma: ";
    cin >> a >> b >> c;
    gamma g1(a, b, c);
    g1.show();
}

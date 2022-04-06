#include<iostream>
using namespace std;

class item
{
    float price;
    int code;
public:
    item(int a, float b) 
    {
        cout << "constructor 1 activated\n";
        price = a;
        code = b;
        cout << "price: " << price << "\ncode: " << code<<endl;
    }
    item()
    {
        cout << "constructor 2 activated\n";
    }
    ~item() 
    {
        cout << "destructor activvated\n";
    }
};

int main()
{
    item a(2, 5.7);
    item b;
    return 0;
}
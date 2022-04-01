#include <iostream>
using namespace std;

class clas
{
    int code;
    static int count;
public:
    void putcode(void)
    {
        code = ++count;
    }
    void showcode(void)
    {
        cout << "object count" << count<<endl;
    }
    static void showcount(void)
    {
        cout << "count: " << count << "\n";
    }

};
int clas::count;

int main()
{
    clas::showcount();
    clas c1, c2, c3;
    c1.putcode();
    c2.putcode();
    clas::showcount();
    c3.putcode();
    clas::showcount();
    c1.showcode();
    c2.showcode();
    c3.showcode();
}


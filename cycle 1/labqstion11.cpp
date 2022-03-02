#include <iostream>
using namespace std;
class class_2;
class class_1
{
	int data1 = 5;
public:
	void show_data1()
	{
		cout << "data1: " << data1 << endl;
	}
	friend void swap(class_1 &a, class_2 &b);
};

class class_2
{
	int data2 = 10;
public:
	void show_data2()
	{
		cout << "data2: " << data2 << endl;
	}
	friend void swap(class_1 &a, class_2 &b);
};
void swap(class_1 &a, class_2 &b)
{
	int temp = a.data1;
	a.data1 = b.data2;
	b.data2 = temp;
}
int main()
{
	class_1 a;
	class_2 b;
	cout << "dat before swaping\n";
	a.show_data1();
	b.show_data2();
	swap(a, b);
	cout << "data after swapping\n";
	a.show_data1();
	b.show_data2();
}



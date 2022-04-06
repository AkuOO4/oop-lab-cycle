#include <iostream>
using namespace std;
class class_2;
class class_1
{
	int data1;
public:
	class_1(){};
	class_1(int a){data1=a;}
	void show_data1()
	{
		cout << "data1: " << data1 << endl;
	}
	friend void swap(class_1 &a, class_2 &b);
};

class class_2
{
	int data2;
public:
	class_2(){};
	class_2(int b){data2=b;}
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
{	int d1,d2;
	cout<<"enter data 1: ";
	cin>>d1;
	cout<<"\nenter datat 2: ";
	cin>>d2;
	class_1 a(d1);
	class_2 b(d2);
	cout << "dat before swaping\n";
	a.show_data1();
	b.show_data2();
	swap(a, b);
	cout << "data after swapping\n";
	a.show_data1();
	b.show_data2();
}



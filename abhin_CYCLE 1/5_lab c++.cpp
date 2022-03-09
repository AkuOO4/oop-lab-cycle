//============================================================================
// Name        : lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int count = 0;

class A
{
public:
	A()
	{
		count++;
		cout<<"\nNo.of object created "<< count;
	}

	~A()
	{
		cout<<"\nNo.of object destroyed "<< count;
		count--;
	}
};
int main() {

	cout<<"Main Block\n";
	A a1, a2, a3;
	{
		cout<<"\nInside Block\n";
		A a4;
	}
	cout<<"\nMain Block";

	return 0;
}

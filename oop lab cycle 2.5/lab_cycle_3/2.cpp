#include <iostream>
using namespace std;

template <class T>

class Calculator 
{
	T num1, num2;
public:
	Calculator() 
	{
		cout << "\n\n Enter the Numbers: ";
		cin >> num1 >> num2;
	}
	Calculator(T a, T b)
	{
		num1 = a;
		num2 = b;
	}
	T sum()
	{
		T sum;
		sum = num1 + num2;
		return sum;
	}
	T sub() 
	{
		T difference;
		difference = num1 - num2;
		return difference;
	}
	T mult()
	{
		T product;
		product = num1 * num2;
		return product;
	}
	T div()
	{
		T ratio;
		ratio = num1 / num2;
		return ratio;
	}
};

int main()
{
	int choice;
	do{
	int ch;
	cout << "\n1. Integer Calculations\n2.Fractional number calculation\n";
	cin >> ch;
	if (ch == 1)
	{
		Calculator<int> C1;
		int dec;
		cout << "\n\n1. addition\n2. subtraction\n3. multiplication\n4. divition\n\n";
		cin >> dec;
		
		switch (dec)
		{
		case 1:
			cout << "sum= " <<C1.sum();
			break;
		case 2:
			cout << "difference= " << C1.sub();
			break;
		case 3:
			cout << "Product= " << C1.mult();
			break;
		case 4:
			cout << "Ratio= " << C1.div();
			break;
		default:
			cout << "\nwrong input\n";
			break;
		}
	}
	else
	{
		Calculator<float> C2;
		int dec;
		cout << "1. addition\n2. subtraction\n3. multiplication\n4. divition\n";
		cin >> dec;
		
		switch (dec)
		{
		case 1:
			cout << "sum= "<<C2.sum();
			break;
		case 2:
			cout <<"difference= "<< C2.sub();
			break;
		case 3:
			cout <<"Product= " <<C2.mult();
			break;
		case 4:
			cout <<"Ratio= " <<C2.div();
			break;
		default:
			cout << "\nwrong input\n";
			break;
		}
	}
	cout<<"\nDo you want to conntinue(1/0) ";
	cin>>choice;
	}while (choice==1 );
	cout<<endl;
	

	
}

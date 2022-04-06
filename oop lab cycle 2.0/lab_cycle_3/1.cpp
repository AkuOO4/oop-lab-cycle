#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
class employe
{
protected:
	string name;
	int idno;
	float salary;
public:
	virtual void inp(void) = 0;
	virtual void disp(void) = 0;
};

class information :public employe
{
	int yrs;

public:
	void inp(void)
	{
		cout << "Name           :";
		cin >> name;
		cout << "ID Number      :";
		cin >> idno;
		cout << "Monthly salary :";
		cin >> salary;
		cout << "Service Years  :";
		cin >> yrs;
	}
	void disp(void)
	{
		cout << name << setw(15) << right << idno << setw(15) << setw(15) << right << salary * 12;

		cout << setw(20) << right << yrs << endl;
	}
};

int main()
{
	cout << "\nPURE VIRTUAL FUNCTION AND ABSTRACT BASE CLASSES\n";
	int n=2;
	cout << "\nEnter details  of 2 employees: ";
	information d[2];
	employe* e[2];
	for (int i = 0; i < n; i++)
	{
		cout << "\nEmployee " << i + 1 << endl;
		e[i] = &d[i];
		e[i]->inp();
	}
	
	cout << "\tDATA\n";

	cout << "Sl.no" << setw(10) << right << "Name" << setw(15) << right << "ID number"  << setw(15) << right << "Anual Salary" << setw(20) << right << " Year of Service" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "   " << i + 1 << ".  " << right<<setw(5);
		e[i]->disp();

	}
	cout << endl;
	return 0;
}

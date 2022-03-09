#include <iostream>
using namespace std;

class student
{
	string name;
	int roll_no;
	float mark1, mark2, mark3;
	char grade;

public:
	void input();
	char calcGrade();
	void display();
};

void student :: input()
{
	cout <<"Enter the Name : ";
	cin >>name;
	cout <<"Enter the Roll number : ";
	cin >>roll_no;
	cout <<"Enter the Marks of 3 subjects";
	cin >>mark1>>mark2>>mark3;

}

char student :: calcGrade()

{
	float tlMark;
	tlMark = (mark1+mark2+mark3)/3;

	if(tlMark > 90)
	{
		grade = 'A';
	}
	else if(80 < tlMark and tlMark <= 90)
	{
		grade = 'B';
	}
	else if(70 < tlMark and tlMark <= 80)
	{
		grade = 'C';
	}
	else if(60 < tlMark and tlMark <= 70)
	{
		grade = 'D';
	}
	else if(50 < tlMark and tlMark<= 60)
	{
		grade = 'E';
	}
	else
		{
		grade = 'G';
		}
	return grade;
}

void student :: display()
{
	cout<<"Student Name : "<<name<<endl;
	cout<<"Roll no : "<<roll_no<<endl;
	cout<<"Mark of subject 1 : "<<mark1<< "\nMark of subject 2 : "<<mark2<<"\nMarl of subject 3 : "<<mark3<<endl;
	cout<<"Total Grade : "<<grade;
}

int main()
{
	student X;
	X.input();
	X.calcGrade();
	X.display();

	return (0);
}

//inheritance including constructors with parameters.
//6. Write a C++ program to design a student class representing student roll no. and
//a test class (derived class of student) representing the scores of the student in
//various subjects and sports class representing the score in sports.The sports and
//test class should be inherited by a result class having the functionality to add
//the scores and display the final result for a student.Demonstrate the concept of
//Virtual base class on Hybrid inheritance.

#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;
public:
    student() 
    {
        cout << "enter rollno: ";
        cin >> roll_no;
    };
    student(int roll){roll_no = roll;}
    void roll(void) { cout << "roll " << roll_no; }
};

class test :public virtual student
{
protected:
    int math, science, computer;
public:
    test():student()
    {
        cout << "enter math,science,computer marks respectively: ";
        cin >> math>>science>>computer;
   
    };
    test(int s1, int s2, int s3)
    {
        math == s1, science = s2, computer = s3;
    }
};

class sports:public virtual student
{
protected:
    int sport1;
public:
    sports():student()
    {
        cout << "sports mark: ";
        cin >> sport1;
    };
    sports(int sp1) { sport1 = sp1; }
};

class result : public test,public sports
{
protected:
    int score;
public:
    result() :sports(), test() {};
    void show_mark(void) { cout << "\nscore is: " << score << endl; }
    void calc_mark(void){score= math + science + computer + sport1 ;}
};

int main()
{
    result r;
    r.calc_mark();
    r.show_mark();
}
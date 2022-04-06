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
    int sub1, sub2, sub3;
public:
    test():student()
    {
        cout << "enter sub1,2,3 mark: ";
        cin >> sub1>>sub2>>sub3;
   
    };
    test(int s1, int s2, int s3)
    {
        sub1 == s1, sub2 = s2, sub3 = s3;
    }
};

class sports:public virtual student
{
protected:
    int sport1, sport2;
public:
    sports():student()
    {
        cout << "sports sub 1 and 2 mark: ";
        cin >> sport1>>sport2;
    };
    sports(int sp1, int sp2) { sport1 = sp1, sport2 = sp2; }
};

class result : public test,public sports
{
protected:
    int score;
public:
    result() :sports(), test() {};
    void show_mark(void) { cout << "\nscore is: " << score << endl; }
    void calc_mark(void){score= sub1 + sub2 + sub3 + sport1 + sport2;}
};

int main()
{
    result r;
    r.calc_mark();
    r.show_mark();
}
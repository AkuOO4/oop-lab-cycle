#include <iostream>
using namespace std;


class stud
{
    int rollno,sub1,sub2,sub3;
    string name,grade;
    
public:
    void data_manip(void);
    string calc_grade(void);
};

void stud::data_manip(void)
{
    cout << "enter roll\n";
    cin>>rollno;
    cout << "enter name\n";
    cin >> name;
    cout << "enter mark of sub1\n";
    cin>>sub1 ;
    cout << "enter mark of sub2\n";
    cin >> sub2;
    cout << "enter mark of sub3\n";
    cin >> sub3;

}

string stud::calc_grade(void)
{
    string grade;
    int avg = (sub1 + sub2 + sub3) / 3;
    cout << "Grade: ";
    if (avg >= 91)
        grade= "A+";
    else if (avg >= 81)
        grade= "A";
    else if (avg >= 71)
        grade ="B+";
    else if (avg >= 61)
        grade ="C+";
    else if (avg >= 51)
        grade= "C";
    else if (avg >= 41)
        grade = "D+";
    else
        grade="D";
    cout << grade<<endl;
    return grade;
}

int main()
{
    string tf;
    stud s;
   while(true)
    {
        
        s.data_manip();
        s.calc_grade();
        cout << "do you want to continue(y/n): ";
        cin >> tf;
        if (tf == "y" or tf == "Y")
            continue;
        else
            cout << "exiting...";
            return false;
    }
}

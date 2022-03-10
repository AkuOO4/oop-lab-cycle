#include <iostream>
using namespace std;

class stud
{
    int roll_no,sub1,sub2,sub3;
    string name,grade;
    
public:
    void data_manip(void);
    void calc_grade(void);
    void disp_data(void);
};

void stud::data_manip(void)
{
    cout << "enter roll\n";
    cin>>roll_no;
    cout << "enter name\n";
    cin >> name;
    cout << "enter mark of sub1\n";
    cin>>sub1 ;
    cout << "enter mark of sub2\n";
    cin >> sub2;
    cout << "enter mark of sub3\n";
    cin >> sub3;
}

void stud::calc_grade(void)
{
    int avg = (sub1 + sub2 + sub3) / 3;
    if (avg >= 91)
        grade= "A + ";
    else if (avg >= 81)
        grade= "A";
    else if (avg >= 71)
        grade ="B + ";
    else if (avg >= 61)
        grade ="C + ";
    else if (avg >= 51)
        grade= "C";
    else if (avg >= 41)
        grade = "D + ";
    else
        grade="D";
    cout << "\naverage: " << avg;
}
void stud::disp_data(void)
{

    cout << "Student Name : " << name << endl;
    cout << "Roll no : " << roll_no << endl;
    cout << "Mark of subject 1 : " << sub1
        << "\nMark of subject 2 : " << sub2
        << "\nMarl of subject 3 : " << sub3 << endl;
    calc_grade();
    cout << "\nTotal Grade : " << grade<<endl;
 }
int main()
{
    char tf;
    stud s;
    while (true)
    {
        s.data_manip();
        s.disp_data();
        cout << "do you want to continue(y/n): ";
        cin >> tf;
        if (tf == 'y' or tf == 'Y')
            continue;
        else
        {
            cout << "exiting...\n";
            return false;
        }
    }
}

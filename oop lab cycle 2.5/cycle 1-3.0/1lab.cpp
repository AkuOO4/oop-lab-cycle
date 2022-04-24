#include <iostream>
using namespace std;

class stud
{
    int roll_no,math,computer,science;
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
    cout << "enter mark of math\n";
    cin>>math ;
    cout << "enter mark of computer\n";
    cin >> computer;
    cout << "enter mark of science\n";
    cin >> science;
}

void stud::calc_grade(void)
{
    int avg = (math + computer + science) / 3;
    if (avg >= 90)
        grade= "A  ";
    else if (avg >= 80)
        grade= "B";
    else if (avg >= 70)
        grade ="C ";
    else if (avg >= 60)
        grade ="D ";
    else if (avg >= 50)
        grade= "E";
    else
        grade="F";
    cout << "\naverage: " << avg;
}
void stud::disp_data(void)
{
    cout<<"************************\n";
    cout << "Student Name : " << name << endl;
    cout << "Roll no : " << roll_no << endl;
    cout << "Mark of math : " << math
        << "\nMark of computer : " << computer
        << "\nMarl of science : " << science << endl;
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

#include <iostream>
using namespace std;

class Time
{
	float hour, minutes, second;
public:
	void getime(int hr, int min, int sec)
	{
		hour = hr;
		minutes = min;
		second = sec;
	}

	void puttime()
	{
		cout << "\ntime in\n"
			<< "hours: " << hour << endl
			<< "minutes: " << minutes << endl
			<< "seconds: " << second << endl;
	}

	void sum(Time t1,Time t2);

};
	
void Time::sum(Time t1,Time t2)
{
	hour = t1.hour + t2.hour;
	minutes = t1.minutes + t2.minutes;
	second = t1.second + t2.second;

	if (second > 60)	//to check if seond or minutes exceeds 60
	{					//if yes encrement accordingly
		minutes += 1;
		second -= 60;
	}
	if (minutes > 60)
	{
		hour += 1;
		minutes -= 60;
	}
	cout << "\nAfter summation: ";
	puttime();
}

int main()
{
	int h1,h2,m1,m2,s1,s2;
	Time t1, t2, t3;
	cout<<"enter time 1\n";
	cout<<"enter time in hours,minutes,seconds\n";
	cin>>h1>>m1>>s1;
	t1.getime(h1,m1,s1);
	t1.puttime();
	cout<<"enter time 2\n";
	cout<<"enter time in hours,minutes,seconds\n";
	cin>>h2>>m2>>s2;
	t2.getime(h2,m2,s2);
	t2.puttime();
	t3.sum(t1, t2);
	return 0;
}
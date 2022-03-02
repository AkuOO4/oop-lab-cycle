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
	Time t1, t2, t3;
	t1.getime(2, 30, 60);
	t1.puttime();
	t2.getime(3, 30, 10);
	t2.puttime();
	t3.sum(t1, t2);
	return 0;
}
#include <iostream>
#include <cstring>

using namespace std;
class String
{
	char *str;
	int len;
public:
	String()
	{
		len = 0;
		str =new char[len + 1];
	}
	String(const char *s)
	{
		len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
	}
	void put_data()
	{
		cin >> str;
	}
	void show_data()
	{
		cout << str << endl;
	}

	void compare(String, String);
	void concat(String, String);
	void length(void);

};


void String::compare(String s1, String s2)//comparison
{
	int a, b;
	a = strlen(s1.str);
	b = strlen(s2.str);
	if (a > b) {
		cout << s1.str << "is larger\n";
	}
	else if (a < b) {
		cout << s1.str << "is smaller \n";
	}
	else
		cout << "both are same" << endl;

}

void String::concat(String s1, String s2)//concatination
{
	len = s1.len + s2.len;
	delete str;
	str = new char[len + 1];
	strcpy(str, s1.str);
	strcat(str, s2.str);
}

void String::length(void)//length
{
	cout << strlen(str);
}

int main()
{
	String st1, st2, st3;
	cout << "enter string 1\n";
	st1.put_data();
		st1.length();
	cout << "enter string 2\n";
	st2.put_data();
		st2.length();
	cout << "comparing \n";
	st3.compare(st1, st2);
		cout << "\nconcatinating\n";
	st3.concat(st1, st2);
	cout << "finding length\n";

	st3.length();
}


#include <iostream>
#include <cstring>
using namespace std;
class string
{
	char str;
	int len;
	public:
	string(){
	len=0;
	str= new char[len+1];
	}
	string(const char *s)
	{
	len=strlen(s);
	str=new char[len+1];
	strcpy(str,s);
	}
	void put_data()
	{cin>>str;}
	void show_data()
	{cout<<str<<endl;
	cout<<str<<endl;}
	
	void compare(string,string);
	void concat(string,string);
	void len(void);

};


void string::compare(string s1,string s2)//comparison
{   
	int a,b;
	a=strlen(len(s1.str);
	b=strlen(s1.str);
	if(a>b){
	cout<<s1.str<<"is larger\n";}
	else if (a<b){
	cout<<s1.str<<"is smaller \n";}
	else
	  cout<<"both are same"<<endl;

} 

void strng::concat(string s1,string s2)//concatination
{
    len=a.len+b.len;
    delete str;
    str=new cha[len+1];
    strcpy(str,s1.str);
    strcat(str,s2.str);
}

void strng::len(void)//length
{
	cout<strlen(str);
}

int main()
{
	string st1,st2,st3;
	cout<<"enter string 1\n";
	st1.put_data()
	st1.len();
	cout<<"enter string 2\n";
	st2.put_data()
	st2.len();
	cout<<"comparing \n";
	st3.compare(st1,st2)
	cout<<"\nconcatinating\n";
	st3.concat(st1,st2);
	cout<<"finding length\n";
	
	st3.len();
}

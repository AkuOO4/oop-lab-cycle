#include <iostream>
#include <string>
using namespace std;

int cnt=101;

class bank
{
	char cust_name[50], acc_type[50];
	float acc_no;
	float balance;
public:
	void add_acc();
	void withdrow();
	void deposit();
	void balnc_enqr();
	void acc_stmnt();
};


void bank::add_acc()
{
	acc_no=cnt;
	cout <<"Enter the account holder name : ";
	cin >>cust_name;
	cout <<"Enter the account type";
	cin>>acc_type;
	cout <<"Enter the total deposited amount(minimum 500)";
	cin>>balance;
	cout<<"AC No : "<<acc_no;
}

void bank ::withdrow()
{
	int b;
	cout<<"Enter the amount to withdraw";
	cin>>b;
	if(balance>= (b+500))
		balance=balance-b;
	else{
		cout<<"Insufficient balance";
		}
}


void bank :: deposit()
{
	float b;
	cout<<"Enter the amount to deposit : ";
	cin >>b;
	balance=balance+b;
	cout<<"Balance : "<<balance;

}

void bank::balnc_enqr()
{

	cout<<"Balance : "<<balance;
}

void bank::acc_stmnt()
{
	cout<<"Name : "<<cust_name;
	cout<<"\nAC No : "<<acc_no;
	cout<<"\nAC Type : "<<acc_type;
	cout<<"\nBalance : "<<balance;
}

int main()
{
	bank cust[cnt];
	int n=0, ac_no;
	while(n<=5)
	{
		cout<<"\nYou can do the following"<<"\nEnter the appropriate number";
		cout<<"\n1 : Add an AC ";
		cout<<"\n2 : Withdraw";
		cout<<"\n3 : Deposit ";
		cout<<"\n4 : Balance enquiry";
		cout<<"\n5 : AC Statement ";
		cout<<"\n6 : Quit";
		cout<<"\nWhat is your option?";

		cin>>n;
		if(n==1){
			cust[cnt].add_acc();
			cnt++;
		}
		else if(1<n and n<7)
		{
			cout<<"Enter the AC No : ";
			cin>>ac_no;
			if(ac_no>(cnt-1))
			{
				cout<<"AC No not match.";
			}
			else
			{
				if(n==2)
					cust[ac_no].withdrow();
				else if(n==3)
					cust[ac_no].deposit();
				else if(n==4)
					cust[ac_no].balnc_enqr();
				else if(n==5)
					cust[ac_no].acc_stmnt();
				else
					cout<<"Thank You";

			}
		}
		else
			cout<<"Try Again";

	}

		return 0;
}

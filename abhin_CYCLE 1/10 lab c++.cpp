#include <iostream>
#include <string>
using namespace std;

int const m=50;

class Items
{
	int itemcode[m];
	float itemprice[m];
	int count;
public:
	void cnt(void){count = 0;}
	void getitem(void);
	void displaysum(void);
	void remove(void);
	void displayitems(void);

};

void Items ::getitem(void)
{
	cout<<"Enter item code : ";
	cin>> itemcode[count];

	cout<<"Enter item cost : ";
	cin>>itemprice[count];
	count++;
}

void Items ::displaysum()
{
	float sum = 0;
	for(int i=0; i<count; i++)
	{
		sum = sum + itemprice[i];

	}
	cout<<"\nTotal value : "<<sum;

}

void Items ::remove()
{
	int a;
	cout <<"Enter item code : ";
	cin>>a;

	for(int i=0; i<count; i++)
		if(itemcode[i] == a)
			itemprice[i] = 0;
}

void Items ::displayitems()
{
	cout<<"\nCode Price\n";

	for(int i=0; i<count; i++)
	{
		cout<<"\n"<<itemcode[i];
		cout<<"  "<<itemprice[i];
	}

}
int main() {
	Items order;
	order.cnt();
	int x;

	do
	{
		cout<<"\nYou can do the following"<<"\nEnter the appropriate number";
		cout<<"\n1 : Add an item ";
		cout<<"\n2 : Display total value";
		cout<<"\n3 : Delete an item ";
		cout<<"\n4 : Display all items";
		cout<<"\n5 : Quit";
		cout<<"\nWhat is your option?";

		cin>>x;

		switch(x)
		{
		case 1 : order.getitem();
		break;
		case 2 : order.displaysum();
		break;
		case 3 : order.remove();
		break;
		case 4 : order.displayitems();
		break;
		case 5 : break;
		default : cout <<"Error in input, try again\n ;";
		}
	}while(x!=5);
	return 0;
}

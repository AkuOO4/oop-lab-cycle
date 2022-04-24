#include<iostream>
using namespace std;

class item
{
    int **m;
	int r,c;
public:
    item(int a, float b) 
    {
        cout << "constructor 1 activated\n";
        r = a;
        c = b;
        m= new int *[r];
        for (int i=0;i<r;i++)
            m[i]=new int [c];
    }
  
    void put_data(void);
    void show_data(void);
    ~item() 
    {
        cout << "destructor activvated\n";
        for (int i = 0; i < r; ++i) {
			delete m[i];
		}
		delete m;
		cout<<"matrix deleted \n";
    }

};
void item::put_data(void)
{
        cout<<"enter the matrix row by row :\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>m[i][j];
		}
	}
}

void item::show_data(void)
{ 
    cout<<"Matrix is\n";
	for (int i = 0; i < c; ++i)
     {
        
		for (int j = 0; j < r; ++j)
         {
			cout<<m[i][j]<<"\t";
		}
		cout<<endl;
    }
}
int main()
{   
    int choice;
	int r1,c1;
	cout<<"enter the row and column of matrix\n";
	cin>>r1>>c1;
    item m(r1,c1);
	m.put_data();
    m.show_data();
    return 0;
}
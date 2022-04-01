#include <iostream>
using namespace std;

class matrix
{
	int **m;
	int r,c;
public:
	matrix(){};
	matrix(int x, int y);
	void input(int &i,int &j,int &value)
	{
		m[i][j]=value;
	}
	int get_matrix(int, int);
	void matrix_add(matrix &, matrix &);
	void matrix_mult(matrix &, matrix &);
	void matrix_transpose(matrix);
	int matrix_trace(int);
};

matrix::matrix(int x, int y)
{
	r=x; c=y;
	m=new int *[r];
	for(int i=0;i<r;i++)
	{
		m[i]=new int [c];
	}
}

int matrix::get_matrix(int i, int j)
{
	return(m[i][j]);
}

void matrix::matrix_add(matrix &a, matrix &b)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			m[i][j]=a.m[i][j]+b.m[i][j];
			cout<<m[i][j]<<"  ";
		}
		cout<<"\n";
	}
}

void matrix::matrix_mult(matrix &a, matrix &b)
{
	int sum=0;
	for(int i=0;i<a.r;i++)
	{
		for(int j=0;j<b.c;j++)
		{	
			sum=0;
			for(int k=0;k<a.c;k++)
			{
				sum+=a.m[i][k]*b.m[k][j];
			}cout<<"\t"<<sum;
			
		}cout<<endl;
	}
}

void matrix::matrix_transpose(matrix a)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			int tp=a.m[j][i];
			cout<<tp<<"  ";
		}
		cout<<endl;
	}
}

int matrix::matrix_trace(int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+m[i][i];
	}
	return sum;
}
int main() {
	int r1, r2, c1, c2;
	cout<<"Enter the number of rows and coloum of first matrix : ";
	cin>>r1>>c1;
	matrix m1(r1,c1);
	cout<<"enter the element in the matrix row by row : ";
	int x1;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cin>>x1;
			m1.input(i, j, x1);
		}
	}
	cout<<"Enter the row and coloum of second matrix :\n ";
	cin>>r2>>c2;
	matrix m2(r2,c2);
	cout<<"Enter the elements in the matrix row by row : \n";
    int x2;
	for(int i2=0;i2<r2;i2++)
	{
		for(int j2=0;j2<c2;j2++)
		{
			cin>>x2;
			m2.input(i2, j2, x2);
		}
	}
	if(r1==r2 and c1==c2)
	{
		matrix S1(r1,c1);
		S1.matrix_add(m1, m2);
	}
	else
		cout<<"Matrix with different dimension";

	if(c1==r2)
	{
		matrix S2(r1,c2);

		cout<<"Product of the matrix : "<<endl;
		S2.matrix_mult(m1, m2);
	}
	cout<<"Trancepose of matrix : ";
	matrix T(c1,r1);
	T.matrix_transpose(m1);
	if(r1==c1)
	cout<<"Trace of matrix : ";
	int trace=m1.matrix_trace(r1);
   	cout<<trace<<endl;

	return 0;
}
#include <iostream>
using namespace std;

class matrices {
	int r, c;
	int **m;
public:
		matrices(int row,int col){
		r = row;
		c = col;
		m = new int *[r];
		for (int i = 0; i < r; ++i)
		 {
			m[i]= new int [c];
		}
	}
	~matrices(){
		for (int i = 0; i < r; ++i) {
			delete m[i];
		}
		delete m;
		cout<<"matrix deleted ";
	}
	matrices(){};
	void get_matrix(void);
	friend void matrix_add(matrices, matrices);
	friend void matrix_mult(matrices, matrices);
	void matrix_transpose();
	void matrix_trace();
};

void matrices::get_matrix()
{
	cout<<"enter the matrix row by row : ";
	for(int i=0;i<r;i++)
	{
		cout<<"\nRow "<<i+1<<endl;
		for(int j=0;j<c;j++)
		{
			cin>>m[i][j];
			
		}
	}
}
void matrix_add(matrices a, matrices b)
{
	if (a.r == b.r and a.c == b.c) {
		int sum[a.r][a.c];
		for (int i = 0; i < a.r; ++i) {
			for (int j = 0; j < a.c; ++j) {
				sum[i][j] = a.m[i][j] + b.m[i][j];
			}
		}
		for (int i = 0; i < a.r; ++i) {
			for (int j = 0; j < b.c; ++j) {
				cout << sum[i][j] << "\t";
			}
			cout << endl;
		}
	}
	else {
		cout << "Addition not possible" << endl;
	}

}

void matrices::matrix_transpose() {
	int transpose[c][r];
	
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			transpose[j][i] = m[i][j];
		}
	}
	
	cout << "Transpose of the Matrix" << endl;
	for (int i = 0; i < c; ++i) {
		for (int j = 0; j < r; ++j) {
			cout << transpose[i][j] << "\t";
		}
		cout << endl;
	}

}

void matrix_mult(matrices a, matrices b) {
	if (a.c == b.r) {
		int mult[a.r][b.c];
		if (a.c == b.r) {
			for (int i = 0; i < a.r; ++i) {
				for (int j = 0; j < b.c; ++j) {
					int sum = 0;
					for (int k = 0; k < a.c; ++k) {
						sum = sum + a.m[i][k] * b.m[k][j];
						mult[i][j] = sum;
					}
				}
			}
			
			cout << "matrix after multiplication" << endl;
			for (int i = 0; i < a.r; ++i) {
				for (int j = 0; j < b.c; ++j) {
					cout << mult[i][j] << "\t";
				}
				cout << endl;
			}
		}
	}
	else {
		cout << "matrix cannot be multiplied";
	}

}

void matrices::matrix_trace() {
	if (r != c) 
		cout << "Trace is not possible";

	else {
		int trace = 0;
		for (int i = 0; i < r; ++i)
		{
			trace=trace + m[i][i];
		}
		cout << "Trace of the Matrix: " << trace;

	}
}
int main() {
	int choice;
	int r1,r2,c1,c2;
	cout << "1  Addition of Matrix\n2  Transpose of Matrix\n3 Matrix Multiplication\n4 Trace of Matrix" << "\n5 exit"<<endl;
	cin >> choice;
	cout<<"enter the row and column of matrix 1\n";
	cin>>r1>>c1;
	matrices m1(r1,c1);
	m1.get_matrix();
	cout<<"enter the row and column of matrix 2\n";
	cin>>r2>>c2;
	matrices m2(r2,c2);
	m2.get_matrix();
	
	while (choice != 5)
	{
		switch (choice) {
		case 1:
			matrix_add(m1, m2);
			break;
		case 2:
			m1.matrix_transpose();
			break;
		case 3:
			matrix_mult(m1, m2);
			break;
		case 4:
			m1.matrix_trace();
			break;
		default:
			cout << "wrong choice";
			break;
		}
		cout << "1  Addition of Matrix\n2  Transpose of Matrix\n3 Matrix Multiplication\n4 Trace of Matrix" << "\n5 exit" << endl;
		cin >> choice;
	}

	return 0;
}
#include <iostream>
#include<iomanip>
using namespace std;

class Matrix {
	int r, c;
	int** m;
public:
	Matrix() {}
	Matrix(int row, int col)
	{
		r = row;
		c = col;
		m = new int* [r];
		for (int i = 0; i < r; ++i)
			m[i] = new int[c];
		
	}
	void getMatrix();
	void disp_matrix();
	void operator+(const Matrix&);
	void operator*(const Matrix&);
	//destructor called
	~Matrix() {
		for (int i = 0; i < r; ++i) {
			delete m[i];
		}
		cout << "Memory cleaned" << endl;
		delete m;
	}
};

void Matrix::getMatrix() {
	cout << "Enter Values" << endl;
	for (int i = 0; i < r; ++i) 
	{
		for (int j = 0; j < c; ++j) 
		{
			cin >> m[i][j];
		}
	}
}

void Matrix::disp_matrix() 
{
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			cout << m[i][j] <<"  ";
		}
		cout << endl;
	}
}

void Matrix::operator+(const Matrix& a)
{
	if (r == a.r and c == a.c) {
		Matrix sum(r, c);
		for (int i = 0; i < r; ++i) {
			for (int j = 0; j < c; ++j) {
				sum.m[i][j] = m[i][j] + a.m[i][j];
			}
		}
		sum.disp_matrix();
	}
	else {
		cout << "Addition not possible" << endl;
	}
}

void Matrix::operator *(const Matrix& a) 
{
	if (c == a.r) {
		Matrix pro(r, a.c);
		for (int i = 0; i < r; ++i) {
			for (int j = 0; j < a.c; ++j) {
				int sum = 0;
				for (int k = 0; k < c; ++k) {
					sum = m[i][k] * a.m[k][j] + sum;
					pro.m[i][j] = sum;
				}
			}
		}
		pro.disp_matrix();
	}
	else {
		cout << "Multiplication not possible" << endl;
	}
}
int main()
{
	int r, c,cond;
	cout << "Enter no of rows and coloumns" << endl;
	cin >> r >> c;
		Matrix m1(r,c);
		cout << "1st Matrix" << endl;
		m1.getMatrix();

		
		cout << "2nd Matrix" << endl;
		cout << "Enter no of rows and coloumns" << endl;
		cin >> r >> c;
		Matrix m2(r,c);
		m2.getMatrix();

		cout << endl;
		cout << "Matrix 1" << endl;
		m1.disp_matrix();
		cout << endl;
		cout << "Matrix 2" << endl;
		m2.disp_matrix();

		do {
			int option;
			cout << "\n1.Matrix Additionn\n2.Matrix Multiplication" << endl;
			cin >> option;
			switch (option) {
			case 1:
				m1 + m2;
				break;
			case 2:
				m1 * m2;
				break;
			default:
				break;
			}
			cout << "\nTo Continue press 1 \n To exit press any other digit" << endl;
			cin >> cond;
		} while (cond == 1);

	return 0;
}
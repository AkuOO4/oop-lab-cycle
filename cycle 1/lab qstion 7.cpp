#include <iostream>
using namespace std;

class matrices {
	int r, c;
	int matrix[10][10];
public:
	matrices() {};
	void get_matrix(void);
	friend void matrix_add(matrices, matrices);
	friend void matrix_mult(matrices, matrices);
	void matrix_transpose();
	void matrix_trace();
};

void matrices::get_matrix()
{
	cout << "Enter the No of Rows: ";
	cin >> r;
	cout << "Enter the No of Coloumns: ";
	cin >> c;

	for (int i = 0; i < r; ++i) 
	{
		cout << "Enter elements of " << i + 1 << " row" << endl;
		for (int j = 0; j < c; ++j)
		{
			cin >> matrix[i][j];
		}
	}
}
void matrix_add(matrices a, matrices b)
{
	if (a.r == b.r and a.c == b.c) {
		int sum[a.r][a.c];
		for (int i = 0; i < a.r; ++i) {
			for (int j = 0; j < a.c; ++j) {
				sum[i][j] = a.matrix[i][j] + b.matrix[i][j];
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
	//to take the transpose
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			transpose[j][i] = matrix[i][j];
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
						sum = sum + a.matrix[i][k] * b.matrix[k][j];
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
		cout << "Trace is possible for square matrix";

	else {
		int trace = 0;
		for (int i = 0; i < r; ++i) {
			trace = trace + matrix[i][i];
		}
		cout << "Trace of the Matrix: " << trace;

	}
}
int main() {
	int choice;
	matrices m1, m2;
	cout << "1  Addition of Matrix\n2  Transpose of Matrix\n3 Matrix Multiplication\n4 Trace of Matrix" << "\n5 exit"<<endl;
	cin >> choice;
	m1.get_matrix();
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
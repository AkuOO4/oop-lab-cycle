#include <iostream>
using namespace std;

class matrix
{
	int c1[3], c2[3], c3[3];

public:
	void show_matrix(void)
	{
		for (int i = 0; i < 3; i++)
			cout << "|" << c1[i] << "," << c2[i] << "," << c3[i] << "|";
	}

	void put_matrix(void)
	{
		cout << "\n it is a 3x3 matrix\n";

		cout << "enter row 1" << endl; 
		for (int i = 0; i < 3; i++)
					cin >> c1[i];
		cout << "enter row 2" << endl;
		for (int i = 0; i < 3; i++)
			cin >> c2[i];
		cout << "enter row 3" << endl;
		for (int i = 0; i < 3; i++)
			cin >> c3[i];

		show_matrix();
	}

	void matrix_add(matrix t1, matrix t2);
	void matrix_transpose(void);
	void matrix_determinant(void);
	
};
void matrix::matrix_add(matrix t1, matrix t2)
{
	matrix t3;
	for (int i = 0; i < 3; i++)
	{
		t3.c1[i] = t1.c1[i] + t2.c1[i];
		t3.c2[i] = t1.c2[i] + t2.c2[i];
		t3.c3[i] = t1.c3[i] + t2.c3[i];
	}
	show_matrix();
}

void matrix::matrix_transpose()
{
	int dupe1[3],dupe2[3],dupe3[3];
	for (int i = 0; i < 3; i++)
	{
		dupe1[0] = c1[0];
		dupe2[0] = c1[1];
		dupe3[0] = c1[2];

		dupe1[1] = c2[0];
		dupe2[1] = c2[1];
		dupe3[1] = c2[2];
		dupe1[2] = c3[0];             
		dupe2[2] = c3[1];
		dupe3[2] = c3[2];
	}
	show_matrix();
}

void matrix::matrix_determinant(void) //https://cdn1.byjus.com/wp-content/uploads/2018/11/maths/2015/12/24070546/Determinant-Of-A-Matrix.jpg
{
	int det = c1[0] * (c2[1] * c3[2] - c3[1] * c2[2]) + c2[0] * (c3[1] * c1[2] - c1[1] * c3[2]) + c3[0] * (c1[1] * c2[2] - c2[1] - c1[2]);
	cout << "The determinent is " << det;
}

int main()
{
	
}


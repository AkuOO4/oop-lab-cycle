#include <iostream>
#include <cmath>
using namespace std;

class Vector{
	float i,j,k,magnitude;
public:
	void getVector();
	void disp_vector();
	void mag();
	void operator==(const Vector&);
	void operator!=(const Vector&);
	void operator<(const Vector&);
	void operator<=(const Vector&);
	void operator>(const Vector&);
	void operator>=(const Vector&);
};


void Vector::getVector(){
	cout<<"Enter the components i,j,k"<<endl;
	cin>>i>>j>>k;
}

//member function to display the vector entered.
void Vector::disp_vector(){
	if (j>=0 and k>=0) {
		cout<<i<<"i + "<<j<<"j + "<<k<<"k"<<endl;
	}
	else {
		if(j<0 and k<0){
			cout<<i<<"i "<<j<<"j "<<k<<"k"<<endl;
		}
		else if(j<0){
			cout<<i<<"i "<<j<<"j + "<<k<<"k"<<endl;
		}
		else {
			cout<<i<<"i + "<<j<<"j "<<k<<"k"<<endl;
		}
	}
}

void Vector::mag()
{
	magnitude = (i*i)+(j*j)+(k*k);
	magnitude = sqrtf(magnitude);
}

// overload == operator for vector
void Vector::operator==(const Vector &A){
	if (magnitude == A.magnitude){
		cout<<"They are equal vectors"<<endl;
	}
	else {
		cout<<"They are unequal vectors"<<endl;
	}
}
// != operator for vector
void Vector::operator!=(const Vector &A){
	if (magnitude != A.magnitude){
		cout<<"They are unequal vectors"<<endl;
	}
	else {
		cout<<"They are equal vectors"<<endl;
	}
}
// overload < operator for vector
void Vector::operator<(const Vector &A){
	if (magnitude < A.magnitude) {
		cout<<"Vector 2 is greater than Vector 1"<<endl;
	}
	else {
		cout<<"Vector 1 is greater than Vector 2"<<endl;
	}
}
//function to overload <= operator for vector
void Vector::operator<=(const Vector &A){
	if (magnitude < A.magnitude) {
		cout<<"Vector 2 is greater than Vector 1"<<endl;
	}
	else if(magnitude == A.magnitude){
		cout<<"They are equal vectors"<<endl;
	}
	else {
		cout<<"Vector 1 is greater than Vector 2"<<endl;
	}
}
//overload > operator for vector
void Vector::operator>(const Vector &A){
	if (magnitude > A.magnitude) {
		cout<<"Vector 1 is greater than Vector 2"<<endl;
	}
	else {
		cout<<"Vector 2 is greater than Vector 1"<<endl;
	}
}
//overload >= operator for vector
void Vector::operator>=(const Vector &A){
	if (magnitude > A.magnitude) {
		cout<<"Vector 1 is greater than Vector 2"<<endl;
	}
	else if(magnitude == A.magnitude){
		cout<<"They are equal vectors"<<endl;
	}
	else {
		cout<<"Vector 2 is greater than Vector 1"<<endl;
	}
}

int main()
 {
	Vector V1,V2;
	int choice,choice2;
	cout<<"Vector 1"<<endl;
	V1.getVector();
	cout<<"\nVector 2"<<endl;
	V2.getVector();
	cout<<"Vector 1 = ";
	V1.disp_vector();
	cout<<"Vector 2 = ";
	V2.disp_vector();
	V1.mag();
	V2.mag();

	do {
		cout<<"\nChoose the operation you want to perform on the vector \n1.Vector1 == Vector2\n2.Vector1 != Vector2\n3.Vector1 <  Vector2\n4.Vector1 <= Vector2\n5.Vector1 >  Vector2\n6.Vector1 >= Vector2\n7.Quit"<<endl;
		cin>>choice;
		switch (choice) {
			case 1:
				V1== V2;
				break;
			case 2:
				V1!= V2;
				break;
			case 3:
				V1< V2;
				break;
			case 4:
				V1<= V2;
				break;
			case 5:
				V1> V2;
				break;
			case 6:
				V1>= V2;
				break;
			default:
				break;
		}
		cout<<"Do you want to Continue ?\n1.Continue\n2.Quit"<<endl;
		cin>>choice2;
	} while (choice2 == 1);
	if(choice2!=1){
		cout<<"Exiting...\n"<<;
	}
	return 0;
}

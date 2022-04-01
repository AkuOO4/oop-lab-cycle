#include<math.h>
#include <iostream>

using namespace std;
int area(int a)//square
{
    int area = pow(a, 2);
    cout << "area square is " << area;
    return 0;
}
int area(double r)//circle
{
    double area = 3.14* pow(r, 2);
        cout << "area circle: " << area;
        return 0;
}

int area(int l, int b)//rectangle
{
    int area = l * b;
    cout << "area of rectangle: " << area;
    return 0;
}

int area(int a, int b, int c)//triangle
{
    int s = (a + b + c) / 2;
    int area;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "area of trinagle is: " << area;
    return 0;
}

int area(double b,double h)//parrellellogram
{
    double area = b * h;
    cout << "area of parrellegram is: " << area;
    return 0;
}

int area(double l, double w, double h)//box
{
    double area = l * w * h;
    cout << "area of box is: " << area;
    return 0;
}

int area(float h, float r)//cylinder
{
    float area = 3.14 * h * pow(r,2);
    cout << "area of cylinder is: " << area;
    return 0;
}

int main()
{
    while (true)
    {
        int n;
        cout << "1.square\n" << "2.rectangle\n" << "3.circle\n" << "4.triangle\n" << "5.parrellelogram\n" << "6.cube\n" << "7.cuboid\n" << "8.cylinder\n";
        cin >> n;
        cout << endl;
        if (n == 1)
        {
            int a;
            cout << "enter the side: ";
            cin >> a;
            area(a);
        }

        else if (n == 2)
        {
            int l, b;
            cout << "enter the side a: ";
            cin >> l;
            cout << "enter the side b: ";
            cin >> b;
            area(l, b);
        }

        else if (n == 3)
        {
            double r;
            cout << "enter the radius: ";
            cin >> r;
            area(r);
        }

        else if (n == 4)
        {
            int a, b, c;
            cout << "enter the side a: ";
            cin >> a;
            cout << "enter the side b: ";
            cin >> b;
            cout << "enter the side b: ";
            cin >> c;
            area(a, b, c);
        }

        else if (n == 5)
        {
            double b, h;
            cout << "enter the hieght: ";
            cin >> h;
            cout << "enter the base: ";
            cin >> b;
            area(b, h);
        }

        else if (n == 6)
        {
            double l, w, h;
            cout << "enter the side: ";
            cin >> l;
            w = h = l;
            area(l, w, h);
        }

        else if (n == 7)
        {
            double l, w, h;
            cout << "enter the length ";
            cin >> l;
            cout << "enter the width ";
            cin >> w;
            cout << "enter the height ";
            cin >> h;
            area(l, w, h);
        }

        else if (n == 8)
        {
            float r, h;
            cout << "enter the height: ";
            cin >> h;
            cout << "enter the radius: ";
            cin >> r;
            area(h, r);
        }
        string tf; //for running it till we want
        cout << "\n do want to continue(y/n): ";
        cin>> tf;
        if (tf == "y" or tf == "Y")
            continue;
        else
	{
	    cout<<"\nthank You\n Exiting...\n;
            return false;
	}

    }
}

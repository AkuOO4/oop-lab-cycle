#include<iostream>
using namespace std;

//Creating abstract class Shape
class Shape
{
protected:
    float area;
public:
    virtual void getarea() {};
    virtual void show() {};
};

class Circle : public Shape
{
    float r;
public:
    void getarea()
    {
        cout << "Enter Radius";
        cin >> r;
        area = 3.14 * r * r;
    }
    void show()
    {
        cout << "Circle Area = " << area << "\n";
    }
};

class Square : public Shape
{
    float a;
public:
    void getarea()
    {
        cout << "Enter side: ";
        cin >> a;
        area = a * a;
    }
    void show()
    {
        cout << "Square Area = " << area << "\n";
    }
};

class Rectangle : public Shape
{
    float l, b;
public:
    void getarea()
    {
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        area = l * b;
    }
    void show()
    {
        cout << "Rectangle Area = " << area << "\n";
    }
};

class Ellipse : public Shape
{
    float major_A, minor_A;
public:
    void getarea()
    {
        cout << "\nEllipse\n";
        cout << "Enter Major Axis length: ";
        cin >> major_A;
        cout << "Enter Minor Axis length: ";
        cin >> minor_A;
        area = 3.14 * major_A * minor_A;
    }
    void show()
    {
        cout << "Ellipse Area = " << area << "\n";
    }
};

int main()
{
    cout << "1. Circle\n";
    cout << "2. Square\n";
    cout << "3. Ellipse\n";
    cout << "4. Rectangle\n";
    cout << "Press Any other integer to exit\n";
    Shape* sptr;
    int choice = 0;
    while (choice <5)
    {
        cout << "\nSelect an option : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            sptr = new Circle;
            sptr->getarea();
            sptr->show();
            break;
        }
        case 2:
        {
            sptr = new Square;
            sptr->getarea();
            sptr->show();
            break;
        }
        case 3:
        {
            sptr = new Ellipse;
            sptr->getarea();
            sptr->show();
            break;
        }
        case 4:
        {
            sptr = new Rectangle;
            sptr->getarea();
            sptr->show();
            break;
        }
        default:
            cout << "Thank You \nExiting....\n";
            break;
        }
    }
}
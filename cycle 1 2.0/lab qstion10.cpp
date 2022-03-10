#include <iostream>
using namespace std;

int  total = 0;

class price_list
{
    int code[10] = { 10,11,12,13,14,15,16,17,18,19 };
    int price[10] = { 10,15,20,25,30,35,40,45,50,55 };
public:
    void show_details()
    {
        for (int i = 0; i < 10; i++)
        {
            cout <<i+1<< ". code: " << code[i] << ",   price: " << price[i]<<endl;
        }
    }
    int price_info(int c)
    {
        return price[c];
    }
};

class list :public price_list
{
    int cust_code[10], quantity[10];
    
    
public:
    void show_list(int ct);
    void add(int c);
    void remove(int c,int ct);
};

void list::show_list(int ct)
{
    for (int i = 0; i < ct; i++)
    {
        cout <<i+1<< ". code: " << cust_code[i] << ",   price: " << price_info(i)<<"   qauntity: "<<quantity[i]
            <<"  value: "<< quantity[i] * price_info(i)<< endl;
    }
    cout<< "\nTotal: RS." << total<<endl;
}

void list::add(int c)
{
    cout << "enter item code: ";
    cin >> cust_code[c];
    cout << "enter quantity: ";
    cin >> quantity[c];
    cout << "quantity: " << quantity[c] << "\nprice: " << price_info(c) << endl;
    total += (quantity[c] * price_info(c));
}

void list::remove(int c, int ct)
{ 
    int found;
    for (int i = 0; i < ct; i++)
    {
        if (cust_code[i] == c)
        {
            found = i;
            break;
        }

    }

    total -= (quantity[found] * price_info(found));
    for (int i = found; i < ct; i++)
    {
        cust_code[found] = cust_code[found + 1];
        quantity[found] = quantity[found + 1];
    }
    cust_code[ct] = 0;
    quantity[ct] = 0;
    
    show_list(ct-1);
}

int main()
{
    int ct=0,inp,code;
    string cntu,subscntu;
    while (true)
    {
    cout << "1. Show Store list\n "
        << "2. show your shopping list\n"
        << "3. add items\n"
        << "4. remove items\n\n";
    
    cin >> inp;
    price_list pl;
    list l;
    
        switch (inp)
        {
        case 1:
            pl.show_details();
            break;
        case 2:
            l.show_list(ct);
            break;
        case 3:
            while (true)
            {
                l.add(ct);
                ct++;
                cout << "wanna add more(y/n): ";    //for adding items the required number of time
                cin >> subscntu;
                if ((subscntu == "y") or ( subscntu=="Y"))
                    continue;
                else
                    break;
            }
            break;
        case 4:
            while (true)
            {
                cout << "enter the item code to remove: ";
                cin >> code;
                l.remove(code,ct);
                ct--;
                cout << "wanna remove more(y/n): ";  //for removing the items the required number of time
                cin >> subscntu;
                if (subscntu == "y" or "Y")
                    continue;
                else
                    break;
            }
            
            break;
        default:
            cout << "wrong input";
        }
        cout << "Do you want to continue(y/n): ";
        cin >> cntu;
        if ((cntu == "Y") or (cntu == "y"))
            continue;
        else
        {
            cout << "\mthanks for shopping your list\n";
            l.show_list(ct);
            break;
        }
    }
}
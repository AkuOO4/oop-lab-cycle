#include <iostream>
using namespace std;

int  total = 0;
/*
class price_list
{protected:
    int  code[10] = { 10,11,12,13,14,15,16,17,18,19 };
    int   = { 10,15,20,25,30,35,40,45,50,55 };
    ={"candy","bread","rice","wheat","flour","bisciut","chips","brush","eggs","meat"};
public:
    void show_details()
    {
        for (int i = 0; i < 10; i++)
        {
            cout <<i+1<< ". code: " << code[i] <<",  Name: "<< name[i]  <<"price:  "<< price[i]<<endl;
        }
    }
    int price_info(int c)
    {
        return price[c];
    }
};
*/
class list
{
    int cust_code[10], quantity[10],price[10];
    string name[10];
    
public:
    void show_list(int ct);
    void add(int c);
    void remove(int c,int ,int qty);
};

void list::show_list(int ct)
{
    for (int i = 0; i < ct; i++)
    {
        cout <<i+1<< ". code: " << cust_code[i]<<", Name: " <<name[i]<< ",   price: " << price[i]<<"   qauntity: "<<quantity[i]
            <<"  value: "<< quantity[i] * price[i]<< endl;
    }
    cout<< "\nTotal: RS." << total<<endl;
}

void list::add(int c)
{
    cout << "enter item code: ";
    cin >> cust_code[c];
    cout<<"enter item name: ";
    cin>>name[c];
    cout<<"enter unit price: ";
    cin>>price[c];
    cout << "enter quantity: ";
    cin >> quantity[c];
    cout << "quantity: " << quantity[c] << "\nprice: " << price[c]<< endl;
    total += (quantity[c] * price[c]);
}

void list::remove(int c, int ct,int &qty)
{ 
    int found=-1;
    for (int i = 0; i < ct; i++)
    {
        if (cust_code[i] == c)
        {
            found = i;
            break;
        }

    }
    if (found==-1)
    {
        cout<<"Code Not Found";
    }
    else
    {
    if (qty==quantity[found])
    {
    total -= (quantity[found] * price[found]);
    for (int i = found; i < ct; i++)
    {
        cust_code[found] = cust_code[found + 1];
        quantity[found] = quantity[found + 1];
        price[found] = price[found + 1];
        name[found] = name[found + 1];
    }
    cust_code[ct] = 0;
    quantity[ct] = 0;
    
    }
    elif(qty>quantity[found])
    {
        cout<<"not enough quantity in stock for the required quantity\n";
    }
    else
    {
        quantity[found]-=qty;
    }
    }
}

int main()
{
    int ct=0,inp,code;
    string cntu,subscntu;
    while (true)
    {
    cout << "1. Show your shopping list\n"
        << "2. Add items\n"
        << "3. Purchase items\n\n";
    
    cin >> inp;
    list l;
    
        switch (inp)
        {
        case 1:
            l.show_list(ct);
            break;
        case 2:
            while (true)
            {
                l.add(ct);
                ct++;
                cout << "wanna add more(y/n): ";    //for adding items the required number of time
                cin >> subscntu;
                if ((subscntu == "y") or ( subscntu=="Y"))
                    continue;
                else
                {   
                    break;
                }
            }
            break;
        case 3:
            while (true)
            {
                cout << "enter the item code to remove: ";
                cin >> code;
                l.remove(code,ct);
                ct--;
                cout << "wanna remove more(y/n): ";  //for removing the items the required number of time
                cin >> subscntu;
                if ((subscntu == "y") or ( subscntu=="Y"))
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
            cout << "\nthanks for shopping\n your list\n";
            l.show_list(ct);
            break;
        }
    }
}
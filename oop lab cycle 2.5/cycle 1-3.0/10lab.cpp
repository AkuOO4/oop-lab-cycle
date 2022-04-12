#include <iostream>
#include<cstring>
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
    int code[10], quantity[10],price[10];
    int cust_code[10],cust_qty[10],cust_price[10];
    string name[10],cust_list[10];
    
public:
    void show_list(int ct);
    void add(int c);
    int remove(int c,int ct ,int qty);
    void purchase(int,int,int);
    int qty_check(int ,int );
    void shop_list(int);
    int search(int, int);
};

void list::show_list(int ct)
{
    for (int i = 0; i < ct; i++)
    {
        cout <<i+1<< ". code: " << code[i]<<", Name: " <<name[i]<< ",   price: " << price[i]<<"   qauntity: "<<quantity[i]
            <<"  value: "<< quantity[i] * price[i]<< endl;
    }
    
}

void list::add(int c)
{
    cout << "enter item code: ";
    cin >> code[c];
    cout<<"enter item name: ";
    cin>>name[c];
    cout<<"enter unit price: ";
    cin>>price[c];
    cout << "enter quantity: ";
    cin >> quantity[c];
    cout << "\nquantity: " << quantity[c]<<"\nname: " <<name[c]<< "\nprice: " << price[c]<< endl;
    //total += (quantity[c] * price[c]);
}

int list::remove(int c, int ct,int qty)
{ 
    int found=search(c,ct);
    if (found==-1)
    {
        cout<<"Code Not Found";
        return 0;
    }
    else
    {
        if (qty==quantity[found])
        {
    
            for (int i = found; i < ct; i++)
            {
                code[found] = code[found + 1];
                quantity[found] = quantity[found + 1];
                price[found] = price[found + 1];
                name[found] = name[found + 1];
            }
            code[ct] = 0;
            quantity[ct] = 0;
            cout<<"\nremoved\n";
        }
        else if(qty>quantity[found])
        {
            cout<<"not enough quantity in stock for the required quantity\n";
        }
        else
        {
            quantity[found]-=qty;
            cout<<"\nremoved\n";
        }
        return 1;
    }
    
}
void list::purchase(int ct_purchase,int c,int qty)
{   int code=search(c,ct_purchase)
    if (remove(c,ct_purchase,qty)==0 or (quantity[c]<qty) or search)
    {
        cout<<"\nPurchase not possible\n";
    }
    else
    {
        total += (qty * price[c]);
        cust_code[ct_purchase]=code[c];
        cust_qty[ct_purchase]=qty;
        cust_list[ct_purchase]=name[c];
        
        cout<< "\nTotal: RS." << total<<endl;
    }
    
}

int list::qty_check(int c,int qty)
{
    if (quantity[c]>=qty)
        return 1;
    else
        return 0;
}

int list::search(int c,int ct)
{
    int found=-1;
    for (int i = 0; i <= ct; i++)
        {
            if (code[i] == c)
            {
                found = i;
                cout<<" i "<<i;
                break;
            }

        }
    return found;
}

void list::shop_list(int cust_ct)
{
    cout<<"\nCustomer count: "<<cust_ct;
    for (int i = 0; i < cust_ct; i++)
    {
        cout <<i+1<< ". code: " << cust_code[i]<<", Name: " <<cust_list[i]<< ",   price: " << cust_price[i]<<"   qauntity: "<<cust_qty[i]
            <<"  value: "<< cust_qty[i] * cust_price[i]<< endl;
    }
    cout<< "\nTotal: RS." << total<<endl;
}

int main()
{
    int ct=0,cust_ct=0,inp,code,cust_code,qty;
    string cntu,subscntu;
    int cond=1;
    while (true)
    {
        cout << "1. Show stock\n"
            << "2. Add items\n"
            <<"3. Remove items\n"
            << "4. Purchase items\n"
            <<"5. Shopping list\n\n";
        
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
            do
            {
                cout << "enter the item code and quantity to remove: ";
                cin >> code>>qty;
        
                l.remove(code,ct,qty);
                if (l.qty_check(code,qty))
                    ct--;
                cout << "wanna remove more(y/n): ";  //for removing the items the required number of time
                cin >> subscntu;
            }while((subscntu=="Y") or (subscntu=="y"));
            break;
            
        case 4:
            
            do
            {
                cout<<"Enter item code and quantity: ";
                cin>>cust_code>>qty;
                l.purchase(cust_ct,cust_code,qty);
                if (l.qty_check(cust_code,qty)==1)
                    cust_ct++;
                cout<<"To Exit Purchase Press Zero\nTO continue prress Any other digit\n";
                cin>>cond;
            
            } while (cond!=0);
            break;
           

        case 5:
            l.shop_list(cust_ct);
            break;
        default:
            cout << "wrong input";
            break;
        }
        cout << "Do you want to continue(y/n): ";
        cin >> cntu;
        if ((cntu == "Y") or (cntu == "y"))
            continue;
        else
        {
            cout << "\nthanks for shopping\n your list\n";
            l.shop_list(cust_ct);
            break;
        }
    }
}
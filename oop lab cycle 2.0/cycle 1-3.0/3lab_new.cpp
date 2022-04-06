#include <iostream>
#include <string>
using namespace std;

int count = 100;

class bank
{
    int acc_no,balance;
    char cust_name[50], acc_type[50];
    
public:
    //int acc_search(int);
    void new_acc(void);
    void acc_details(void);    //secret code needed for employee to see all details
    void acc_transaction(int amt);   //to withdraw or deposit
    void acc_balance(void);

    
};
/*
int bank::acc_search(int ac_no)
{
    
    int n = 0;  //for searching the account no.
    int ac_check = acc_no[n];
    cout << "\nacc search check: " << ac_no;
    while (true)
    {
        if (ac_check==acc_no[n] )
            break;
        else
            n++;
    }
    return n;
}
*/
void bank::new_acc() 
{
    acc_no=count;
    cout << "\nenter the following details\n";
    std::cout << "\nname: ";
    cin >> cust_name;

    int i = 0;
    while (i==0)//making the user renter until balance is above 500
    {
        std::cout << "\ninsert amount greater than 500: ";
        std::cin >> balance;
        if (balance >500)
            i = 1;
        else
            continue;
    }

    cout << "\nenter account type: ";
    cin >> acc_type;

    acc_details();

}

void bank::acc_details()
{
    cout<<"Account statement\n";
    //int n= acc_search(ac_no);
    cout << "\naccount no.:  " << acc_no 
        << "\nname: "<< cust_name 
        << "\naccount type: " << acc_type 
        << "\nbalance: " << balance;
}

void bank::acc_transaction(int amt)//withdraw//deposit
{
    
    int i = 0, abort=0;
    while (i == 0)//making the user enter until balance is above 500
    {
        
        if ((balance + amt) > 500)
        {
            i = 1;
            balance += amt;
        }
        else
        {
            std::cout << "\nmin balance violated enter lower amt : ";
            std::cin >> amt;
            abort++;
        }
        if (abort == 5)
        {
            std::cout << "max no. of tries exceeded exiting";
            i = 1;
        }
    }
}
void bank::acc_balance()
{
    std::cout << "your balance is: "<<balance<<endl;
}

int main()
{
    int inp,ac_no;
    bank b[count];
    cout<<"Welcome to Bank\n"; 
    while (true)
    {
        
        
        cout << "\n1. new acount" 
            << "\n2. withdraw"
            << "\n3. deposit" 
            << "\n4. balance enqiury" 
            << "\n5. account statement\n";
        std::cin >> inp;
        if (inp == 1)
        {
            b[count].new_acc();
            count++;
        }
        if (inp == 2 or inp==3 or inp==4 or inp==5)
        {
            std::cout << "\nenter account number: ";
            std::cin >> ac_no;
        }
        if (inp == 2)
        {
            int amt;
            cout << "\nenter amt to withdraw: ";
            cin >> amt;
            amt = -amt;
            cout << "\n withdraw=" << amt;
            b[ac_no].acc_transaction(amt);
        }
        else if (inp == 3)
        {
            int amt;
            cout << "\nenter amt to deposit: ";
            cin >> amt;
            b[ac_no].acc_transaction(amt);
        }
        else if (inp == 4)
            b[ac_no].acc_balance();

        else if (inp == 5)
            b[ac_no].acc_details();

        string repeat;
        cout << "\nndo you want to continue(y/n): ";
        cin >> repeat;
        if (repeat == "y" or repeat == "Y")
	{
	    cout<<"\n\t___NEW LINE___\n";
            continue;
	}
        else
	{
	    cout<<"\nTHANK YOU\n\t EXITING......\n";
            return false;  
	}       
    }
}

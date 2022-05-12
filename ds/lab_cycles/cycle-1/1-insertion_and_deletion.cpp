#include <iostream>
using namespace std;

void insertion (int arr[], int element, int position,int len)
{
    int temp=arr[position-1];
    int new_arr[len+1];
    int i=0,k=0;
    while (i<len+1)
    {
        if (i!=position)      
        {
            new_arr[i]=arr[k];
        }
        else
        {
            new_arr[i]=element;
            k++;
        }
        i++;
        k++;
    }
    cout<<"array is\n";
    for (int i=0;i<len+1;i++)
        cout<<new_arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int ele=5;
    int length=9;
    int postion=5;
    insertion(arr,ele,postion,length);
}
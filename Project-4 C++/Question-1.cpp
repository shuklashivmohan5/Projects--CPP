#include<iostream>
using namespace std;

int main()
{
    int size;
    int i;
    cout<<"Enter the array size :-  ";
    cin>>size;
    int arr[size];
    
    for(i=0;i<size;i++)
    {
        cout<<"Enter array's elements:- ["<<i<<"] ";
        cin>>arr[i];
    }
    cout<<"The negative elements of the array are:- ";
    for(i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            cout<<arr[i]<<" ";  
        }
    }
    
    return 0;
}
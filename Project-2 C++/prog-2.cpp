#include<iostream>
using namespace std;

int main()
{
    int num;
    int count = 0;

    cout<<"Enter any Number:-";
    cin>>num;

    while (num!=0)
    {
        num/=10;
        count++;
    }

    cout<<"Length of number is "<<count;

    return 0;
    
}
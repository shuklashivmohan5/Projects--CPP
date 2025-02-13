#include<iostream>
using namespace std;

int main()
{
    int number, firstdigit, lastdigit;


    cout<<"Enter any number:-";
    cin>>number;

    lastdigit = number%10;

    while (number >= 10)
    {
        number = number/10;
    }

    firstdigit = number;
    cout<<"The sum of the first and the last digit:- "<<firstdigit+lastdigit;
    
    return 0;
    
}
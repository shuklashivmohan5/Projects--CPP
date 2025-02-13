#include<iostream>
using namespace std;

int main()
{
    char word = 'a';
    
    do
    {
        cout<<word<<" ";
        word = word + 4;
    } while (word <='z');

    return 0;
    
}
#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}

int main()
{
    int choice, a, b;
    do
    {
        cout<<endl<<endl;
        cout<<"Enter 1 for +"<<endl;
        cout<<"Enter 2 for -"<<endl;
        cout<<"Enter 3 for *"<<endl;
        cout<<"Enter 4 for /"<<endl;
        cout<<"Enter 5 for %"<<endl;
        cout<<"Enter 0 to exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter first numbers: ";
                cin>>a;
                cout<<"Enter second numbers: ";
                cin>>b;
                cout<<"Sum is: "<<add(a, b);
                break;

            case 2:
                cout<<"Enter first numbers: ";
                cin>>a;
                cout<<"Enter second numbers: ";
                cin>>b;
                cout<<"Subtraction is: "<<sub(a, b);
                break;
            
                case 3:
                cout<<"Enter first numbers: ";
                cin>>a;
                cout<<"Enter second numbers: ";
                cin>>b;
                cout<<"Multiplication is: "<<mul(a, b);
                break;
            
                case 4:
                cout<<"Enter first numbers: ";
                cin>>a;
                cout<<"Enter second numbers: ";
                cin>>b;
                cout<<"Division is: "<<divide(a, b);
                break;

                case 5:
                cout<<"Enter first numbers: ";
                cin>>a;
                cout<<"Enter second numbers: ";
                cin>>b;
                cout<<"Modulus is: "<<mod(a, b);
                break;
                default:
                cout<<"Invalid choice! Please try again";
        }
    }
    while(choice != 0);
    return 0;
}



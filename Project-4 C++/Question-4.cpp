#include<iostream>  
using namespace std;

int main()
{
    int row, col;
    cout<<"Enter the array's row size:- ";
    cin>>row;
    cout<<"Enter the array's column size:- ";
    cin>>col;
    int arr[row][col];
    int i, j;
    int sum = 0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"Enter array's elements:- ["<<i<<"]["<<j<<"] ";
            cin>>arr[i][j];
        }
    }
    cout<<"Enter row number:- ";
    cin>>i;
    for(j=0;j<col;j++)
    {
        cout<<arr[i][j]<<" "<<endl;
        sum = sum + arr[i][j];
    }
    cout<<"The sum of the row is:- "<<sum<<endl;
    sum = 0;
    cout<<"Enter column number:- ";
    cin>>j;
    for(i=0;i<row;i++)
    {
        cout<<arr[i][j]<<" "<<endl;
        sum = sum + arr[i][j];
    }
    cout<<"The sum of column is:- "<<sum;
    return 0;
}
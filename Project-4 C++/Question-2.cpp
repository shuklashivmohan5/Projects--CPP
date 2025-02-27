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
    int max = arr[0][0];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"Enter array's elements:- ["<<i<<"]["<<j<<"] ";
            cin>>arr[i][j];
            if(arr[i][j]>max)
            {
                max = arr[i][j];
            }
        }
    }
            cout<<"The largest element is:- "<<max;

    return 0;
}



#include<iostream>
using namespace std;

int main()
{
    int row, col;
    cout<<"Enter the array's row & column size:- ";
    cin>>row>>col;  
    int arr[row][col];
    int i, j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"Enter array's elements:- ["<<i<<"]["<<j<<"] ";
            cin>>arr[i][j];
        }
    }
        cout<<"The transpose matrix is:- "<<endl;
        for(i=0;i<col;i++)
        {
            for(j=0;j<row;j++)
            {
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
        
    return 0;
}
// 1             1
// 1 2         2 1
// 1 2 3     3 2 1
// 1 2 3 4 4 3 2 1

#include <iostream>
using namespace std;

int main()
{
    int i,j;
    int n=4;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout << j << " ";
        }
        for(j=1;j<=2*(n-i);j++)
        {
            cout << "  ";
        }
        for(j=i;j>=1;j--)
        {
            cout << j << " ";
        }
        cout<<endl;
    }
    
    return 0;
}

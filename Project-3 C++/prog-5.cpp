// 1 2 3 4 5 5 4 3 2 1

#include <iostream>
using namespace std;

int main()
{
    int n=5;
    int i;
    
    for(i=1;i<=n;i++)
    {
        cout << i << " ";
    }
    for(i=n;i>=1;i--)
    {
        cout << i << " ";
    }
    
    cout<<endl;

    return 0;
}

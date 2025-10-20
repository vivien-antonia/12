#include <iostream>

using namespace std;

int main()
{
    int a[26][26],n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            a[j][i]=i*j;
            if(a[j][i]>9){a[j][i]=a[j][i]%10;}
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

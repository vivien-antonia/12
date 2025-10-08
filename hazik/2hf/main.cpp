#include <iostream>

using namespace std;

int main()
{
    int n, k,Sszamjegy=0,nr=0;
    int a[100];
    cin>>n;
    cin>>k;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {   int b=a[i];
        Sszamjegy=0;
        while(b!=0)
        {   int szj=b%10;
            b=b/10;
            Sszamjegy++;
        }
        if(Sszamjegy>k)
        {
            nr++;
        }
    }
    cout<<nr;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a[200], b[200];
    int n, Sparos=0, Sparatlan=0;
    cout<<"n=";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
        if(a[i]%2==0){
                Sparos+=a[i];
             }
    }
    for(int j=0; j<n; j++)
    {
        cout<<"b["<<j<<"]=";
        cin>>b[j];
    }
    for(int j=0; j<n; j++)
    {
             if(b[j]%2!=0){
                if(b[j]<Sparos)
                {
                    Sparatlan+=b[j];
                }
             }
    }
    cout<<Sparatlan;
    return 0;
}

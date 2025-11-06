#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,  sor, oszlop;
    double S=0;
    int db=0;
    ifstream in("input.txt");
    ofstream out("output.txt");
    in>>n;
    int a[n][n];
    for(sor=0; sor<n; sor++)
    {
        for(oszlop=0; oszlop<n; oszlop++)
        {
            in>>a[sor][oszlop];
        }
    }
    for(sor=0; sor<n; sor++)
    {
        for(oszlop=0; oszlop<n; oszlop++)
        {
            if (oszlop > sor && a[sor][oszlop] > 0) {
                S+= a[sor][oszlop];
                db++;
            }
        }
    }
    if(db!=0)
    {
        out<<S/db;
    }
    else{out<<"Nincs";}

    return 0;
}

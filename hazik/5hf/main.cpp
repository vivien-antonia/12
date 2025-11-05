#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,  sor, oszlop;
    double felett=0, alatt=0, kulonbseg=0;
    int sf=0, sa=0;
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
            if (oszlop > sor && a[sor][oszlop] > 0) { // főátló fölött
                felett += a[sor][oszlop];
                sf++;
            } else {
            if (oszlop < sor && a[sor][oszlop] > 0) { // főátló alatt
                alatt += a[sor][oszlop];
                sa++;
            }}
        }
    }
    felett=felett/sf;
    alatt=alatt/sa;
    kulonbseg=felett-alatt;
    out<<kulonbseg;
    return 0;
}

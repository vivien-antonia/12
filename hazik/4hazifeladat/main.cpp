#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sor;
    getline(cin, sor);
    string uj="", szo = "";
    int betukszama=0;
    bool tukor=false;
    sor+=' ';
    for (int i = 0; i < sor.size(); i++)
    {
        if (sor[i] != ' ')
        {
            szo+= sor[i];
            betukszama++;

        }
        else
        {
            if(betukszama%2!=0)
            {
                if(szo=="reper")
                {
                    tukor=false;
                    betukszama=0;
                    uj+=szo;
                }
                else
                {
                    tukor=true;
                }
                while(betukszama!=0)
                {
                    uj+=szo[betukszama-1];
                    betukszama--;
                }
                if(betukszama==0)
                {
                    uj+=' ';
                }
                betukszama=0;
                szo="";

            }
            else
            {
                uj+=szo;
                uj+=' ';
                szo="";
            }

        }
    }
   if(uj==sor) tukor=false;
    if (tukor)
    {
        cout<<uj;
    }
    else
    {
        cout << "nu exista" << endl;
    }
    return 0;
}

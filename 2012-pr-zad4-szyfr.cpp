#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream wyrazy("tj.txt");
    ifstream klucze("klucze1.txt");
    ofstream wynik("wynik4a.txt");
    ifstream wyrazydeszy("sz.txt");
    ifstream kluczedeszy("klucze2.txt");
    ofstream wynikdeszy("wynik4b.txt");
    string tabwyrazow[1000];
    string tabkluczy[1000];
    int wyniczeq=0;
    string wyniczeq2;
    int kodzik=0,pjery,drugy;
    int druuga;
    for (int i=0;i<120;i++)
    {
        wyrazy>>tabwyrazow[i];
        klucze>>tabkluczy[i];
        for (int j=0,k=0;j<tabwyrazow[i].length();)
        {
            if(k>=tabkluczy[i].length())
            {
                k=0;
            }
            if(tabkluczy[i][k]=='A')kodzik=1;if(tabkluczy[i][k]=='B')kodzik=2;if(tabkluczy[i][k]=='C')kodzik=3;if(tabkluczy[i][k]=='D')kodzik=4;if(tabkluczy[i][k]=='E')kodzik=5;
if(tabkluczy[i][k]=='F')kodzik=6;if(tabkluczy[i][k]=='G')kodzik=7;if(tabkluczy[i][k]=='H')kodzik=8;if(tabkluczy[i][k]=='I')kodzik=9;if(tabkluczy[i][k]=='J')kodzik=10;if(tabkluczy[i][k]=='K')kodzik=11;
if(tabkluczy[i][k]=='L')kodzik=12;if(tabkluczy[i][k]=='M')kodzik=13;if(tabkluczy[i][k]=='N')kodzik=14;if(tabkluczy[i][k]=='O')kodzik=15;if(tabkluczy[i][k]=='P')kodzik=16;if(tabkluczy[i][k]=='Q')kodzik=17;
if(tabkluczy[i][k]=='R')kodzik=18;if(tabkluczy[i][k]=='S')kodzik=19;if(tabkluczy[i][k]=='T')kodzik=20;if(tabkluczy[i][k]=='U')kodzik=21;if(tabkluczy[i][k]=='V')kodzik=22;if(tabkluczy[i][k]=='W')kodzik=23;
if(tabkluczy[i][k]=='X')kodzik=24;if(tabkluczy[i][k]=='Y')kodzik=25;if(tabkluczy[i][k]=='Z')kodzik=26;
                pjery=tabwyrazow[i][j];
                drugy=kodzik;
                wyniczeq=tabwyrazow[i][j]+kodzik;
                if(wyniczeq>=91)
                {
                    wyniczeq-=26;
                }
                wyniczeq2=(char) wyniczeq;
                wynik<<wyniczeq2;
                j++;
                k++;
        }
        wynik<<endl;
    }

    //////////////////////////////////////////////////////////

    for (int i=0;i<120;i++)
    {
        wyrazydeszy>>tabwyrazow[i];
        kluczedeszy>>tabkluczy[i];
        for (int j=0,k=0;j<tabwyrazow[i].length();)
        {
            if(k>=tabkluczy[i].length())
            {
                k=0;
            }
            if(tabkluczy[i][k]=='A')kodzik=1;if(tabkluczy[i][k]=='B')kodzik=2;if(tabkluczy[i][k]=='C')kodzik=3;if(tabkluczy[i][k]=='D')kodzik=4;if(tabkluczy[i][k]=='E')kodzik=5;
if(tabkluczy[i][k]=='F')kodzik=6;if(tabkluczy[i][k]=='G')kodzik=7;if(tabkluczy[i][k]=='H')kodzik=8;if(tabkluczy[i][k]=='I')kodzik=9;if(tabkluczy[i][k]=='J')kodzik=10;if(tabkluczy[i][k]=='K')kodzik=11;
if(tabkluczy[i][k]=='L')kodzik=12;if(tabkluczy[i][k]=='M')kodzik=13;if(tabkluczy[i][k]=='N')kodzik=14;if(tabkluczy[i][k]=='O')kodzik=15;if(tabkluczy[i][k]=='P')kodzik=16;if(tabkluczy[i][k]=='Q')kodzik=17;
if(tabkluczy[i][k]=='R')kodzik=18;if(tabkluczy[i][k]=='S')kodzik=19;if(tabkluczy[i][k]=='T')kodzik=20;if(tabkluczy[i][k]=='U')kodzik=21;if(tabkluczy[i][k]=='V')kodzik=22;if(tabkluczy[i][k]=='W')kodzik=23;
if(tabkluczy[i][k]=='X')kodzik=24;if(tabkluczy[i][k]=='Y')kodzik=25;if(tabkluczy[i][k]=='Z')kodzik=26;
                pjery=tabwyrazow[i][j];
                drugy=kodzik;
                wyniczeq=tabwyrazow[i][j]-kodzik;
                if(wyniczeq<=64)
                {
                    wyniczeq+=26;
                }
                wyniczeq2=(char) wyniczeq;
                wynikdeszy<<wyniczeq2;
                j++;
                k++;
        }
        wynikdeszy<<endl;
    }
    return 0;
}

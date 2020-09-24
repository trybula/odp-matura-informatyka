#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main()
{
    ifstream plik("dane.txt");
    ofstream plik2("wynik.txt");
    int ilewyrazow=0,makszawsze=1,maksteraz=1,parzyste=0,nieparzyste=0,ostatnia,palindromy=0;
    string tab[1000],pierwszy,tenwyraz;
    for(int i=0;i<1000;i++)
    {
        plik>>tab[i];
    }
    sort(tab,tab+1000);
    for(int i=0;i<1000;i++)
    {
        //cout<<tab[i]<<endl;
        if(tab[i]==tab[i+1]&&tab[i]!=pierwszy)
        {
            pierwszy=tab[i];
            ilewyrazow+=1;
        }
        if(tab[i]==tab[i+1])
        {
            maksteraz+=1;
        }
        if(maksteraz>makszawsze)
        {
            makszawsze=maksteraz;
            tenwyraz=tab[i];
        }
        if(tab[i]!=tab[i+1])
        {
            maksteraz=1;
        }
        if(tab[i][tab[i].size()-1]=='A'||tab[i][tab[i].size()-1]=='C'||tab[i][tab[i].size()-1]=='E')parzyste+=1;
        bool palindrom = true;
        string slowo=tab[i];
        int d = slowo.length();

        for(int i = 0; i < d / 2; i++)
                if (slowo[i] != slowo[d-1-i])
                {
                    palindrom = false;
                    break;
                }
        if (palindrom == true)palindromy+=1;
    }
    cout<<"a)"<<endl<<" - "<<ilewyrazow<<endl<<" - "<<tenwyraz<<endl<<" - "<<makszawsze<<endl;
    cout<<"b) "<<parzyste<<endl;
    cout<<"c) "<<palindromy<<endl;
    plik2<<"a)"<<endl<<" - "<<ilewyrazow<<endl<<" - "<<tenwyraz<<endl<<" - "<<makszawsze<<endl;
    plik2<<"b) "<<parzyste<<endl;
    plik2<<"c) "<<palindromy<<endl;
    return 0;
}

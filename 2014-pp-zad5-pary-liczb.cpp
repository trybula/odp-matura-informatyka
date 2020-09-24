#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream plik("PARY_LICZB.txt");
    ofstream plik2("ZADANIE5.txt");
    int pier,drug,wiel,razem=0,suma=0,takiesamesumy=0;
    for (int i=0;i<1000;i++)
    {
        plik>>pier;
        plik>>drug;

            if(drug%pier==0||pier%drug==0)
                    {
                        razem=razem+1;
                    }
    int nom,nom2;
    nom=pier;
    nom2=drug;

    while(pier != drug)
        if(pier > drug) pier -= drug;
        else      drug -= pier;

    if(pier==1)
    {
        suma=suma+1;
    }

    int cokolwiek=0, cokolwiek2=0, x1=0, x2=0;
    while (nom!=0)
    {
        cokolwiek=nom%10;
        x1=cokolwiek+x1;
        nom=nom/10;
    }

    while (nom2!=0)
    {
        cokolwiek2=nom2%10;
        x2=cokolwiek2+x2;
        nom2=nom2/10;
    }

    if(x1==x2)
    {
        takiesamesumy=takiesamesumy+1;
    }

    }

    cout<<razem<<endl<<endl<<suma<<endl<<endl<<takiesamesumy;
    plik2<<razem<<endl<<endl<<suma<<endl<<endl<<takiesamesumy;
    return 0;
}

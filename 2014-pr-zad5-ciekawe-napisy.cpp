#include <iostream>
#include <fstream>

using namespace std;

//ARMIA POLCYN MORDERCZE PROGRAMOWANIE

int main()
{
    ifstream plik("NAPIS.txt");
    ofstream plik2;
    plik2.open("ZADANIE5.txt");
    string wyraz;
    string zadb[999];
    string zadc[999];
    string wyrazy[1000];
    int licz1=0;
    int licz2=0;
    int sumanapisowpierwszych=0;
    for (int j=0;j<1000;j++)
    {
    int razem=0;
    int dlugosc=0;
    int dlugosc2=0;
    int wieksza=1;
    for (int i=0;i<1;i++)
    {
        //getline(cin,wyraz);
        plik>>wyraz;
        wyrazy[j]=wyraz;

    for (int i = 0; i < wyraz.length(); i++)
    {
        char x = wyraz.at(i);
        dlugosc=int(x);
        dlugosc2=dlugosc+dlugosc2;
        if(wyraz[i]<=wyraz[i-1])
        {
            wieksza=0;
        }
    }
    }
//cout <<endl<<dlugosc2;

int jest=1;

for(int i=2;i*i<=dlugosc2;i++)
{
    if(dlugosc2%i==0)
    {
        jest=0;
        break;
    }
}

if (jest==1)
{
    sumanapisowpierwszych=sumanapisowpierwszych+1;
}
if (wieksza==1)
{
    //cout<<wyraz<<endl;
    zadb[licz1]=wyraz;
    licz1=licz1+1;
}

    }

    cout << sumanapisowpierwszych<<endl<<endl;
    plik2 << sumanapisowpierwszych<<endl<<endl;
    for (int i=0;i<licz1;i++)
    {
        cout<<zadb[i]<<endl;
        plik2<<zadb[i]<<endl;
    }
cout<<endl;
plik2<<endl;
/*for (int i=0;i<1000;i++)
{
    for (int j=i+1;j<1000;j++)
    {
        if(wyrazy[i]==wyrazy[j]&&wyrazy[i]!="\0")
        {
            cout<<wyrazy[i]<<endl;
            plik2<<wyrazy[i]<<endl;
        }
    }

}*/

  for (int i=0;i<1000;i++)
    {
        for (int j=0;j<1000-i;j++)
        {
            if (wyrazy[j]>wyrazy[j+1])
            {
                string tmp=wyrazy[j];
                wyrazy[j]=wyrazy[j+1];
                wyrazy[j+1]=tmp;
            }
        }
    }

/*for (int i=0;i<1000;i++)
{
    plik2 << wyrazy[i]<<endl;
}*/

    for (int i=0;i<1000;i++)
    {
        if(wyrazy[i]==wyrazy[i+1]&&wyrazy[i]!="\0")
        {
            cout<<wyrazy[i]<<endl;
            plik2<<wyrazy[i]<<endl;
        }
    }

plik2.close();
    return 0;
}

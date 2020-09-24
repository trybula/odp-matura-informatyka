#include <iostream>
#include <fstream>

using namespace std;

void odczyt(string tab[])
{
    ifstream plik("hasla.txt");
    int parzyste=0,nieparz=0,czeker=1;
    for (int i=0;i<200;i++)
    {
        plik >> tab[i];
        cout << tab[i] << endl;
        if(tab[i].size()%2==0)
        {
            parzyste=parzyste+1;
        }
        else
        {
            nieparz=nieparz+1;
        }
    }
    ofstream plik2("wynik4a.txt");
    plik2<<"parzyste "<<parzyste<<endl;
    plik2<<"nieparzyste "<<nieparz;
}
void podpb(string tab[])
{
    int r;
    for (int i=0;i<200;i++)
    {
        r=tab[i].size();
        string temp=tab[i];
        for(int j=0;j<r;j++)
        {
            if(temp[j]
        }
    }
}

int main()
{
    string tab[200];
    odczyt(tab);
    return 0;
}
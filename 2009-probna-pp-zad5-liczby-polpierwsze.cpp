#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main()
{
    ifstream plik("liczby.txt");
    ifstream plik2("wynik.txt");
    long double a,p,e=0.000001,l=10000,czeker=1;
    long long b=0;
    for(int j=0;j<500;j++)
    {
        czeker=1;
        plik>>p;
        a=p;
        for (int i=0;abs(a-p/a)>e&&i<l;i++)
        {
            a=(a+p/a)/2;
        }
b=a;
float difference = (float) b - a;
float tolerableDifference = 0.000001;

if ((-tolerableDifference <= difference) && (difference <= tolerableDifference))
{
    for(int k=2;k*k<=b;k++)
    {
        if(b%k==0)
        {
            czeker=0;
        }
    }
    if(czeker==1&&b>1)
        {
            cout<<p<<endl;
        }
}
    }
    return 0;
}

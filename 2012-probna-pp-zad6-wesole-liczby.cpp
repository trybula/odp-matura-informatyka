#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int sumka=0;
    string n,z;
    cin>>n;
    for(int i=0;i<n.size();i++)
    {
        z=n[i];
        stringstream s(z);
        int x;
        s>>x;
        sumka+=x*x;
    }
    for(int j=0;sumka>9;j++)
    {
        stringstream ss;
        ss<<sumka;
        string s2=ss.str();
        sumka=0;
        for(int i=0;i<s2.size();i++)
        {
            z=s2[i];
            stringstream s(z);
            int x;
            s>>x;
            sumka+=x*x;
        }
    }
    cout<<sumka<<endl;
    if(sumka==1)cout<<"liczba jest wesola";
    else
    cout<<"liczba jest smutna";
    return 0;
}

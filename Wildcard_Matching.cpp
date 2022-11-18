#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a="cb";
    string b="?a";
    int i=0;
    while(a.size() != b.size())
    {
        if(b[i]=='*')
        {
            b=a[i]+b;
            i=0;
        }
        i++;
    }
    for(int i=0; i<b.size(); i++)
    {
        if(b[i]=='?')
        {
            b[i]=a[i];
        }
        if(b[i]=='*')
        {
            b[i]=a[i];
        }
    }
    cout<<a<<" "<<b<<'\n';
    if(a==b)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>a;
    a["one"]=1;
    a["two"]=2;
    a["three"]=3;
    map<string,int>::iterator i=a.begin();
    while(i != a.end())
    {
        cout<<"key :"<<i->first<<" value :"<<i->second<<'\n';
        i++;
    }
    cout<<a.count("one");
    return 0;
}

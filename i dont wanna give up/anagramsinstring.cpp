#include<iostream>
#include<map>
using namespace std;
bool check(map<char,int>a,string s1,int y)
{
    map<char,int>b=a;
    for(char x: s1)
    {
        b[x]--;
    }
    map<char,int>::iterator it=b.begin();
    for(it=b.begin();it!=b.end();it++)
    {
        if(it->second>0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s1="abab",s2="ab";
    map<char,int>a;
    for(char x: s2)
    {
        a[x]++;
    }
    map<char,int>::iterator it=a.begin();
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    for(int i=0;i<=s1.size()-s2.size();i++)
    {
        cout<<i<<' '<<s1.substr(i,s2.size())<<' '<<check(a,s1.substr(i,s2.size()),s2.size())<<'\n';
    }
    return 0;
}

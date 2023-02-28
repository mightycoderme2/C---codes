#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(int n1,int n2,string a,bool result)
{
    if(a.length()==0 && result)
    {
        return true;
    }
    string n3= to_string(n1+n2);
    int value=min(n3.length(),a.length());
    if(a.substr(0,value)==n3)
    {
        return check(n2,stol(n3),a.substr(value),true);
    }
    return false;
}
int main()
{
    string s="112358";
    int n=s.length();
    for(int i=1;i<n;i++)
    {
        long long n1=stol(s.substr(0,i));
        if(to_string(n1)!=s.substr(0,i))
        {
            break;
        }
        for(int j=i+1;j<n;j++)
        {
        long long n2=stol(s.substr(i,j-i));
        if(to_string(n2)!=s.substr(i,j-i))
        {
            break;
        }
        bool found=check(n1,n2,s.substr(j),false);
        if(found)
        {
            cout<<"true";
            break;
        }
        }
    }
    return 0;
}

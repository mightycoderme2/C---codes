#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void ans(int n,int target,int k,string s)
{
    if(n==0)
    {
        if(target==0)
        {
        cout<<s<<'\n';
        }
        return;
    }
    for(int i=1;i<=k;i++)
    {
        ans(n-1,target-i,k,s+to_string(i));
    }
}
int main()
{
    int n=3,k=6,target=12;
    string s="";
    ans(n,target,k,s);
    return 0;
}

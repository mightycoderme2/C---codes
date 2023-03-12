#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
    for(int i=0;i<s.length()-1;i++)
        {
            char ch=s[i];
            if(count(s.begin(), s.end(), ch)!=1)
            {
                return false;
            }
        }
        return true;
}
void permutate(char a[],int k,int n,string s,int t)
{
    if(k==t)
    {
        //cout<<int(s[0]-48);
        if(check(s))
        {
        cout<<s<<'\n';
        }
        s="";
        return;
    }
    for(int i=0;i<n;i++)
    {
        permutate(a,k,n,s+a[i],t+1);
    }
}
int main()
{
    char a[]={'a','b','c','d'},k=3,n=4,t=0;
    string s="";
    permutate(a,k,n,s,t);
    return 0;
}


#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int ans(int n)
{
    if(n==0)
    {
    //cout<<s<<'\n';
    return 1;
    }
    if(n<0)
    {
        return 0;
    }
    if(n==1 || n==2 )
    {
        return n;
    }
    return (ans(n-1)+ans(n-2)+ans(n-3));
}
int main()
{
    int k=35;
    cout<<ans(k)%10000000007;
    return 0;
}

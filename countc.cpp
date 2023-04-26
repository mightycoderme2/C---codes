#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void ans(int a[],int target,int k,string s,long long int &count)
{
    if(target==0)
    {
    count=count+1;
    //cout<<s<<'\n';
    return;
    }
    if(target<0)
    {
        return;
    }
    for(int i=0;i<k;i++)
    {
        ans(a,target-a[i],k,s+to_string(a[i]),count);
    }
}
int main()
{
    int k=35;
    long long int count=0;
    int a[k];
    for(int i=0;i<3;i++)
    {
        a[i]=i+1;
    }
    string s="";
    ans(a,k,k,s,count);
    cout<<count;
    return 0;
}

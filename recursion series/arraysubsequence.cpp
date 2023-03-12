#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void find(int a[],vector<int>&b,int l,int n)
{
    if(l>=n)
    {
        for(int x:b)
        {
            cout<<x<<' ';
        }
        if(b.size()==0)
        {
            cout<<"{}";
        }
        cout<<'\n';
        return;
    }
    b.push_back(a[l]);
    find(a,b,l+1,n);
    b.pop_back();
    find(a,b,l+1,n);
}
int main()
{
    vector<int>b;
    int a[]={1,2,3};
    int l=0,n=sizeof(a)/sizeof(a[0]);
    find(a,b,l,n);
    return 0;
}

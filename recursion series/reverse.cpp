#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int l,int r)
{
    if(l>=r)
    {
        return;
    }
    swap(a[l],a[r]);
    reverse(a,l+1,r-1);
}
int main()
{
    int a[]={1,2,3,4,5};
    int l=0,r=sizeof(a)/sizeof(a[0])-1;
    reverse(a,l,r);
    for(int i:a)
    {
        cout<<i;
    }
    return 0;
}

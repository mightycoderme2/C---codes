#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={100,4,200,1,3,2};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    int index=0,count=1;
    for(int i=0;i<n;i++)
    {
        if(a[i+1]-a[i]==0 || a[i+1]-a[i]==1)
        {
            count=count+1;
        }
    }
    if(count==n)
    {
        count=count-1;
    }
    cout<<count<<endl;
    return 0;
}
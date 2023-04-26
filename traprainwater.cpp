#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={ 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    int n=sizeof(a)/sizeof(a[0]);
    int left[n],right[n];
    left[0]=a[0];
    right[n-1]=a[n-1];
    for(int i=1;i<n;i++)
    {
        left[i]=max(a[i],left[i-1]);
    }
    for(int i=n-2;i>=0;i--)
    {
        right[i]=max(a[i],right[i+1]);
    }
    int total=0;
    for(int i=0;i<n;i++)
    {
        total=total+(min(left[i],right[i])-a[i]);
    }
    cout<<total;
    return 0;
}

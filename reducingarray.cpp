#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_array(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}
int large_find(int a[],int n)
{
    int max=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>a[max])
        {
            max=i;
        }
    }
    return max;
}
int main()
{
    int a[]={5,20,15};
    int n=sizeof(a)/sizeof(a[0]);
    int b[n];
    print_array(a,n);
    int i=0,j=sizeof(a)/sizeof(a[0]);
    while(i!=j)
    {
        b[large_find(a,n)]=j;
        a[large_find(a,n)]=INT_MIN;
        j--;
    }
    print_array(b,n);
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int n=sizeof(a)/sizeof(a[0]),max=INT_MIN,sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+a[i];
        if(sum>max)
        {
            max=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
        cout<<sum<<' '<<max<<'\n';
    }
    cout<<max;
    return 0;
}
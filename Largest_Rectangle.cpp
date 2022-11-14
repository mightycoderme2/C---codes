#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={2,1,5,6,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    int b=*max_element(a,a+n);
    int c=*min_element(a,a+n);
    if(n>=b)
    {
        cout<<n*c;
    }
    return 0;
}
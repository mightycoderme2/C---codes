#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a{1,5,9,10,11};
    vector<int>b{2,3,6,7};
    int total_size=(a.size()+b.size()-1)/2 -2;
    int l1=0,l2=0,count=0;
    while(l1<a.size() && l2<b.size()&&l1+l2<=total_size)
    {
        if(a[l1]<=b[l2])
        {
            //cout<<a[l1];
            l1++;
        }
        else
        {
            //cout<<b[l2];
            l2++;
        }
    }
    while(l1<a.size() &&l1+l2<=total_size )
    {
            //cout<<a[l1];
            l1++;
    }
    while(l2<b.size() &&l1+l2<=total_size )
    {
        //cout<<a[l2];
        l2++;
    }
    cout<<a[l1+1];
    return 0;
}

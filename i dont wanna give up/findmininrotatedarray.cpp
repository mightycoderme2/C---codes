#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={3,4,5,1,2};
    for(auto x:a)
    {
        cout<<x;
    }
    cout<<'\n';
    int left=0,right=sizeof(a)/sizeof(a[0])-1;
    while(left+1<right)
    {
        int mid=left+(right-left)/2;
        if(a[mid]>a[right])
        {
            left=mid;
        }
        else if(a[mid]<a[right])
        {
            right=mid;
        }
        else
        {
            right--;
        }
    }
    cout<<min({a[left],a[right]});
    return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int calculate_sum(vector<int>a,int start,int end)
{
    int count=0;
    for(int i=start; i<end; i++)
    {
        count=count+a[i];
    }
    return count;
}
int main()
{
    vector<int>a={ 1, 5, 11, 5};
    int l=1;
    sort(a.begin(), a.end());
    int ans=-1;
    for(int i=0; i<a.size(); i++)
    {
        if(calculate_sum(a,0,i)==calculate_sum(a,i,a.size()))
        {
            ans=i;
        }
    }
    cout<<ans;
    return 0;
}

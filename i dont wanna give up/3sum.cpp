#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    vector <int > a {-1,0,1,2,-1,-4};
    sort(a.begin(),a.end());
    for(auto e:a)
    {
        cout<<e<<' ';
    }
    int k=2;
    cout<<'\n';
    for(int i=0;i<a.size();i++)
    {
        int initial=i+1,last=a.size()-1;
        while(initial<last)
        {
        if(a[i]+a[initial]+a[last]==k)
        {
            cout<<a[i]<<a[initial]<<a[last]<<'\n';
            while(a[initial]!=a[initial+1])
            {
                initial++;
            }
            while(a[last]!=a[last-1])
            {
                last--;
            }
            initial++;
            last--;
        }
        else if(a[i]+a[initial]+a[last]>k)
        {
            last--;
        }
        else
        {
            initial++;
        }
        }
    }
    return 0;
}

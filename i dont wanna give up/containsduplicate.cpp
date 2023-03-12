#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int > a{1,2,3,1};
    bool x=0;
    int k=3 ,t =0;
    for(int i=0; i<a.size(); i++)
    {
        for(int j=i+1; j<i+1+k; j++)
        {
            if(j>=a.size())
            {
                break;
            }
            if(abs(a[i]-a[j])<=t)
            {
                 x=true;
            }
        }
    }
    cout<<x;
    return 0;
}

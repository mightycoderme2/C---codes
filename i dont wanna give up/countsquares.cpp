#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector <int> >a{{0,1,1,1},
                           {1,1,1,1},{0,1,1,1}};
                        int count=0;
    for(int i=0; i<a.size(); i++)
    {
    for(int j=0; j<a[i].size(); j++)
    {
        if(i!=0 && j!=0)
        {
            a[i][j]=1+min({a[i-1][j],a[i-1][j-1],a[i][j-1]});
        }
        count=count+a[i][j];
    }
    }
    for(int i=0; i<a.size(); i++)
    {
        for(auto x:a[i])
        {
            cout<<x;
        }
        cout<<'\n';
    }
    cout<<count;
    return 0;
}

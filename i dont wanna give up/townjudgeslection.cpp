#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n=3;
    int a[n];
    vector<vector <int>>trust={{1,3},{1,4},{2,3},{2,4},{4,3}};
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++)
    {
        //cout<<trust[i][0]-1<<trust[i][1]-1;
        a[trust[i][0]-1]--;
        a[trust[i][1]-1]++;
    }
    int x=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==n-1)
        {
            x=i+1;
        }
    }
    cout<<x;
    return 0;
}

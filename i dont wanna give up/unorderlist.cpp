#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int>a;
    int x;
    for(int i=0; i<42; i++)
    {
        cin>>x;
        if(a.find(x)!=a.end())
        {
            a.insert(x);
        }
    }
    for(int x:a)
    {
        cout<<x<<' ';
    }

    return 0;
}

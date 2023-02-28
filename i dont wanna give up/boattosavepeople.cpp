#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int>people{3,5,3,4};
    int limit=5;
    sort(people.begin(), people.end());
    int i=0,j=people.size()-1,count=0;
    while(i<=j)
    {
        if(people[i]+people[j]>limit)
        {
            j--;
            count++;
        }
        else
        {
            i++;
        }
    }
    cout<<count;
    return 0;
}


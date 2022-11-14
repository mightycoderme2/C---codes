#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nums[] = {7,8,9,11,12},i;
    sort(nums,nums+sizeof(nums)/sizeof(int));
    for(i=1;i<sizeof(nums)/sizeof(int);i++)
    {
        
        if(nums[i]!=i)
        {
            cout<<i<<" missing";
            return 0;
        }
    }
    cout<<i<<" missing";
    return 0;
}
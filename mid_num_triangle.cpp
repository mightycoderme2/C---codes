#include<iostream>
using namespace std;
int main()
{
    int n=6,count=1;
    for (int i=n; i>=0; i--)
    {
        int k=i;
    while(k)
    {
cout<<" ";
k=k-1;
    }
    for (int j=i ; j<n; j++)
    {
        if(j==n-1)
        {
            cout<<count++;
        }
        else
        {
            cout<<"*";
        }
    }
    
    for (int j=i+1 ; j<n; j++)
    {
        cout<<"*";
    }
    
    cout<<'\n';
    }
    return 0;
}
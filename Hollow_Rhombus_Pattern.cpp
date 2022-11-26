#include<iostream>
using namespace std;
int main()
{
    int n=7;
    for(int i=0; i<n; i++)
    {
        for(int k=0; k<i; k++)
        {
            cout<<" ";
        }
        for(int j=0; j<n; j++)
        {           
            if(i==0 || i==n-1)
            {
            cout<<"*";
            }
            else
            {
            if(j==0 || j==n-1)
            {
            cout<<"*";
            }
            else
            {
            cout<<" ";
            }
            }
        }
        cout<<'\n';
    }
    return 0;
}
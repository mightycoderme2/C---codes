#include<iostream>
using namespace std;
int main()
{
    int n=6;
    int i=0,count=0;
    while(i!=-1)
    {
     for(int j=i;j>0;j--)
    {
        cout<<"*";
    }   
    for(int k=i;k<=2*n;k++)
    {
        if(k>(2*n)-i)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    if(i<=n)
    {
    cout<<'\n';
    }
    if(i<n && count==0)
    {
        i++;
    }
    else
    {
    count=1;
      i--;
    }
    }
    /*
    for(int i=n-1;i>=0;i--)
    {
     for(int j=i;j>0;j--)
    {
        cout<<"*";
    }  
    for(int k=i;k<=2*n;k++)
    {
        if(k>(2*n)-i)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<'\n';
    } 
    */
    return 0;
}
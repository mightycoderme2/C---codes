#include<iostream>
using namespace std;
int main()
{
    int n,i,n1,k1;
    cout<<"enter a number";
    cin>>n>>n1;
    int k=(n1>n)?n:n1;
    for(int i=1;i<k+1;i++)
    {
        if((n%i==0)&&(n1%i==0))
        {
           k1=i;
        }
    }
    cout<<k1;
    return 0;
}
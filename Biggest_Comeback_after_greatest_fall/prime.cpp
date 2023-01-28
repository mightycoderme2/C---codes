#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter a prime number";
    cin>>n;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            cout<<"not prime";
            break;
        }
    }
    if(i+1==n)
    {
        cout<<"prime";
    }
    return 0;
}
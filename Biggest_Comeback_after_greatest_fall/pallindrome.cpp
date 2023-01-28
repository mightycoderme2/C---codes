#include<iostream>
using namespace std;
int pow(int i)
{
    int ans=1;
    while(i!=0)
    {
        ans=ans*10;
        i=i-1;
    }
    return ans;
}
int length(int k)
{
    int length=0;
    while(k!=0)
    {
        length=length+1;
        k=k/10;
    }
    return length;
}
int main()
{
    int n=123212,i=length(n)-1;
    cout<<"enter a number";
    //cin>>n;
    int n2=n,n_r=0;
    while(n!=0)
    {
        n_r=n_r+(n%10)*(pow(i));
        n=n/10;
        i=i-1;
        
    }
    cout<<n_r<<'\n';
    if(n_r==n2)
    {
        cout<<"pallindrome";
    }
    else
    {
        cout<<"not pallindrome";
    }
    return 0;
}
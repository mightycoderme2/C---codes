#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
void ans(int n)
{
    if(n==0)
    {
        return;
    }
    ans(n-1);
    cout<<fibo(n)<<' ';
}
int main()
{
    int n=10;
    ans(n);
    return 0;
}

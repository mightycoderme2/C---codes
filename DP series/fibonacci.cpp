#include<iostream>
using namespace std;
int fibo(int n)
{
    int a=0,b=1;
    int c=1;
    for(int i=1;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;

}
int main()
{
    int n=9;
    cout<<fibo(n);
    return 0;
}

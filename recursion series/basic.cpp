#include<iostream>
using namespace std;
int call(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+call(n-1);

}
int main()
{
    int i=1,n=4,sum=0;
    cout<<call(n);
    return 0;
}

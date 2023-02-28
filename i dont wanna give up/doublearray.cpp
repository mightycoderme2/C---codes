#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    int b[2*n];
    for(int i=0; i<n;i++)
    {
        b[i]=a[i];
        b[i+n]=a[i];
    }
    for(int i=0; i<2*n; i++)
    {
        cout<<b[i];
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int a[]={0,1,3,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n;i++)
    {
        if(a[i]==(n-i))
        {
            cout<<a[i];
            break;
        }
    }
    return 0;
}
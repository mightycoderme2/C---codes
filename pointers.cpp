#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int *ptr=&a[sizeof(a)/sizeof(a[0])-1];
    for(int i=sizeof(a)/sizeof(a[0]); i>0; i--)
    {
        cout<<*ptr;
        ptr--;
    }
    return 0;
}

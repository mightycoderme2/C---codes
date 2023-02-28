#include<iostream>
using namespace std;
int main()
{
    int a[]={0,2,1,5,3,4};
    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++)
    {
        cout<<a[a[i]]<<" ";
    }
    return 0;
}

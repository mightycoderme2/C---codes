#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int a[]={2, -9, 5, 11, 1, -10, 7};
    map<int,int>b;
    bool found1=false;
    for(int x:a)
    {
        if(x==1)
        {
            found1=true;
        }
        if(x>0)
        {
            b[x-1]=x;
        }
    }
    if(found1)
    {
    map<int,int>::iterator it=b.begin();
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(b[i]!=i+1)
        {
            cout<<i+1;
            break;
        }
    }
    }
    else
    {
        cout<<1;
    }
    return 0;
}

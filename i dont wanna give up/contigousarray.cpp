#include<iostream>
#include<map>
using namespace std;
int main()
{
    int a[]={0,1,0,0,0,0,1,0};
    map<int,int>b;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(a[i]==0)
        {
            b[i]=-1;
        }
        else
        {
            
        }
    }
    return 0;
}

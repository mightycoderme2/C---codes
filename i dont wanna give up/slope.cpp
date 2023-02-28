#include<iostream>
#include<vector>
using namespace std;
int find(int a[],int b[])
{
    return (b[1]-a[1])/(b[0]-a[0]);
}
int main()
{
    int a[][100]={{1,1},{2,2},{3,4},{4,5},{5,6},{7,7}};
    int slope=find(a[0],a[1]);
    bool x;
    for(int i=1; i<sizeof(a)/sizeof(a[0]); i++)
    {
        int check=find(a[i],a[i+1]);
        if(check!=slope)
        {
            x=false;
        }
    }
    if(x)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}

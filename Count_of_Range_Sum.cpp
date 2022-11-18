#include<iostream>
using namespace std;
int main()
{
    int a[]={1,-2,5,-1},max=a[0],min=a[0],max_index=0,min_index=0;
    for(int i=0; i< sizeof(a)/sizeof(a[0]); i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            max_index=i;
        }
        if(a[i]<min)
        {
            min=a[i];
            min_index=i;
        }
    }
    int x=min_index,y;
    for(int j=0;j<sizeof(a)/sizeof(a[0]);j++)
    {
        if(j==x)
        {
            cout<<x<<" "<<y;
            y=min_index;
        }
    }
    //cout<<max<<" "<<min<<endl;
    return 0;
}
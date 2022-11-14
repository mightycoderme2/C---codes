#include<iostream>
using namespace std;
int main()
{
    //int a[4][2] = {{1,3},{2,6},{8,10},{15,18}};
    int a[2][2]={{1,4},{4,5}};
    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++)
    {
         for(int j=0; j<sizeof(a[0])/sizeof(a[0][0]); j++)
    {
        if(a[i][j+1]>=a[i+1][j])
        {
            a[i][j+1]=a[i+1][j+1];
        }
    }   
    
    }
    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++)
    {
         for(int j=0; j<sizeof(a[0])/sizeof(a[0][0]); j++)
    {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int x=1,y=2;
    if(n<=2)
    {
        cout<<n;
    }
    else
    {
        for(int i=3;i<n;i++)
        {
            int temp=y;
            y=y+x;
            x=temp;
        }
    }
    cout<<x+y;
    return 0;
}

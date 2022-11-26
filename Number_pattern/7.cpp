#include<iostream>
using namespace std;
int main()
{
    int n=5;
    
    for(int i=n-1; i>=0; i--)
    {
       for(int j=i; j<n; j++)
        {
            cout<<(j+1)%2;
        }
        cout<<"\n";
    }
    return 0;
}
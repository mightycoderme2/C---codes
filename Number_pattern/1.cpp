#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0; i<n; i++)
    {
        int count=1;
        for(int j=i; j<n; j++)
        {
            cout<<count++;
        }
            cout<<"\n";

    }
    return 0;
}
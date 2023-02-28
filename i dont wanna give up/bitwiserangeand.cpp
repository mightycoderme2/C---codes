#include<iostream>
using namespace std;
int main()
{
    int x=5;
    for(int i = 6; i <8;i++)
    {
        x=x&i;
    }
    cout<<x;
    return 0;
}

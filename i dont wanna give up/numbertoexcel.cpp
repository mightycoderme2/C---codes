#include<iostream>
using namespace std;
int main()
{
    int n=703;
    while(n>0)
    {
        char y=(n-1)%26+'A';
        cout<<y;
        n=(n-1)/26;
    }
    return 0;
}

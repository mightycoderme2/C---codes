#include<iostream>
using namespace std;
int main()
{
    int a=6,b=4;
    a=a^b;
    cout<<a<<'\n';
    a=6;
    b=4;
    b=0-b;
    int result=a-b;
    cout<<result;
    return 0;
}
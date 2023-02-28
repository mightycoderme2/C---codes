#include<iostream>
using namespace std;
int main()
{
    auto a=0b101010;
    auto b=a+ (~a);
    cout<<b;
    return 0;
}
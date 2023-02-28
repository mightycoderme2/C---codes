#include<iostream>
using namespace std;
int main()
{
    float hr,min;
    cin>>hr>>min;
    hr=(hr+(min/60))*30;
    min=min*6;
    cout<<hr-min;
    return 0;
}

#include<iostream>
#include<array>
using namespace std;
int main()
{
    std::array<int, 5> nitin={1,2,3,4,5};
    for (int i=0; i<5;i++)
    {
        cout<<nitin[i]<<endl;
    }
    return 0;
}
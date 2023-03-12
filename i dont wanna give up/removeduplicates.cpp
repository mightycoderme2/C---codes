#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    vector<int>a {1,2,2,3,4,5,5};
    for(auto x:a)
    {
        if(a[x-1]<0)
        {
            cout<<x;
        }
        a[x-1]=a[x-1]*(-1);
    }
    return 0;
}

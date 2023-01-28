#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    map<int,vector<int>>m;
    m[1].push_back(0);
    m[122].push_back(9);
    for(const auto& a:m){
        cout<<a.first<<" "; 
        for(const auto&n:a.second)
        {
            cout<<n<<" ";
        }
    }
    return 0;
}
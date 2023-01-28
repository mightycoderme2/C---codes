#include<iostream>
#include<set>
#include<functional>
using namespace std;
class person
{
    public:
    int age;
    int name;
    bool operator < {const person & rhs} const { return age < rhs.age;} 
};
int main()
{
    set<person> s = {{1,1},{2,2},{3,3}};
    for(const auto& x:s)
    {
        cout<<x.age;
    }
    return 0;
}
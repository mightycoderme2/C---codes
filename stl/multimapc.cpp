#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<int,int>m;
    m.insert(make_pair(1,1));
    m.insert(make_pair(1,2));
    m.insert(make_pair(1,3));
    m.insert(make_pair(2,1));
    m.insert(make_pair(2,2));
    m.insert(make_pair(2,3));
    auto x=m.find(1);
    cout<<x->first;
    auto x1=m.lower_bound(1);
    cout<<x1->first;
    
    auto x2=m.upper_bound(1);
    cout<<x2->first<<endl;

       auto x3=m.equal_range(1);
       for(auto i=x3.first;i!=x3.second;i++)
       {
        cout<<i->first<<" "<<i->second<<endl;
       }
       
    return 0;
}
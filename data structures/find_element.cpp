#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> a={1,2,3};
    auto res= find(a.begin(),a.end(),3);
   if (res != a.end()){
      cout << "Element ";
   }
    for(auto e:a)
    {
        cout<<e;
    }
    return 0;
}
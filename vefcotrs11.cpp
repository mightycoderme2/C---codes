#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector <int>> a;
    int b,c,d;
    cin>>b;
    a.resize(b);
    for(int i=0; i<b; i++)
    {
        cin>>c>>d;
        a[c].push_back(d);
    }
    for(const auto &e1:a)
    {
        for(const auto &e2:e1)
        {
            cout<<e2;
        }
        cout<<"\n";
    }
    return 0;
}
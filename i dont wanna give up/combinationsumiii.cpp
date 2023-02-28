#include<iostream>
#include<vector>
using namespace std;
void combination(vector<int>a,vector<int>b[],int k,int n,int j,int l)
{
if(b[l].size()==k)
{
    cout<<"true";
    l++;
    j=0;
    return;
}
for(int i=j;i<n;i++)
{
    b[l].push_back(a[i]);
    cout<<b[l].size()<<'\n';
    combination(a,b,k,n,j+1,l);
}
}
int main()
{    vector<int>a{1,2,3,4,5,6,7,8,9};
    vector<int>b[9];
    combination(a,b,3,9,0,0);
    for(int i=0;i<9;i++)
    {
        for(auto x:b[i])
        {
            cout<<x<<' ';
        }
        cout<<'\n';

    }
    return 0;
}

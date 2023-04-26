#include<iostream>
#include<vector>
using namespace std;
int find(vector<int> a,int n,int k)
{
    if(k==0)
    {
        return 1;
    }
    if(n<=0)
    {
        return 0;
    }
    if(k<0)
    {
        return 0;
    }
    return find(a,n,k-a[n-1]) +find(a,n-1,k);
}
int main()
{
    vector<int>a={1,2,3};
    int n=3;
    int k=4; 
    cout<<find(a,n,k);
    return 0;
}

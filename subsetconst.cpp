#include<iostream>
#include<vector>
using namespace std;
int power(int x,int n1)
{
    while(n1!=1)
    {
        x=2*x;
        n1=n1-1;
    }
    return x;
}
int a[]={1,2,3,4},n=sizeof(a)/sizeof(a[0]);
void binary_convert(vector <int> ans[] ,int y,int n)
{
    int z=y,count=0;
    while(y!=0 )
    {
        if(y%2==1)
        {
            ans[z].push_back(a[count]);
        }
        count=count+1;
        y=y/2;
    }
}
int main()
{
vector <int> ans[power(2,n)];

    for(int i=0; i<power(2,n); i++)
    {
        binary_convert(ans,i,n);
    }
for(auto x:ans)
{
    for(auto y:x)
    {
        cout<<y;
    }
    cout<<'\n';   

}

auto y=0b0111;
cout<<y;
    return 0;
}
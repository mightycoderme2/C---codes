#include<iostream>
using namespace std;
int check(string s,int l,int r)
{
if(l>=r)
{
    return 1;
}
if(s[l]!=s[r])
{
    return -1;
}
return check(s,l+1,r-1);
}
int main()
{
    string s="nitin";
    int l=0,r=s.length()-1;
    cout<<check(s,l,r);
    return 0;
}  

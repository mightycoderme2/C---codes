#include<iostream>
#include<set>
using namespace std;
bool check(string s)
{
    if(s[0]==s[s.length()-1])
    {
        return true;
    }
    else
    {
        return false;
    }
}
void permutate(char a[],int j,int n,string &s,set<string>&b)
{
    if(j==n)
    {
        if(check(s)==1)
        {
            cout<<s<<'\n';
            b.insert(s);
        }
        s="";
        return;
    }
    for(int i=j;i<n;i++)
    {
        s=s+a[i];
        permutate(a,i+1,n,s,b);
        permutate(a,i,n-1,s,b);
    }
}
int main()
{
    char a[]={'a','b','a'},n=3;
    string s="";
    set<string>b;
    permutate(a,0,n,s,b);
    cout<<b.size();
    return 0;
}

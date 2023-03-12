#include<iostream>
using namespace std;
void permutate(string a[],int k,int n,string s)
{
    if(k==n)
    {
        cout<<s<<'\n';
        s="";
        return;
    }
    for(int i=0;i<a[k].length();i++)
    {
    permutate(a,k+1,n,s+a[k][i]);
    }
}
int main()
{
    string c="238";
    string b[]={"abc", "def","ghi","jkl","mno","pqr","stu","vwx","yz"};
    string a[9];
    int n=c.length();
    for(int i=0;i<n;i++)
    {
        if((int)(c[i]-'0')==0)
        {
            a[i]=b[8];
        }
        else
        {
        a[i]=b[(int)(c[i]-'0')-2];
        }
    }
    string s="";
    permutate(a,0,n,s);
    return 0;
}

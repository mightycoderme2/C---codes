#include<iostream>
using namespace std;
bool check(string s)
{
    int mid=s.length()/2,sum=0;
    for(int i=0; i<mid; i++)
    {
        sum=sum+s[i]-s[s.length()-1-i];
    }
    if(sum==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void permutate(int k,int n,string s)
{
    if(k==n)
    {
        //cout<<int(s[0]-48);
        if(check(s)==1)
        {
        cout<<s<<'\n';
        }
        s="";
        return;
    }

    permutate(k+1,n,s+"0");
    permutate(k+1,n,s+"1");

}
int main()
{
    int k=0,n=5;
    string s="";
    permutate(k,n,s);
    return 0;
}


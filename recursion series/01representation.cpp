#include<iostream>
using namespace std;
bool check(string s)
{
    for(int i = 0; i <s.length()-1; i++)
    {

        if(int(s[i]-48)+int(s[i+1]-48)>=2)
        {
            return false;
        }
    }
    return true;
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
    int k=0,n=4;
    string s="";
    permutate(k,n,s);
    return 0;
}


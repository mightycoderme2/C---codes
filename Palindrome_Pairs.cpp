#include<iostream>
#include<string>
using namespace std;
int check_palindrome(string a,string b)
{
    string c=a+b;
    string d="";
    for(int i=c.size()-1; i>=0; i--)
    {
        d=d+c[i];
    }
    if(c==d){
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    string a[] = {"abcd","dcba","lls","s","sssll"};
    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++)
    {
    for(int j=0; j<sizeof(a)/sizeof(a[0]); j++)
    {
        if(i!=j)
        {
        if(check_palindrome(a[i],a[j])==1)
        {
            cout<<i<<" "<<j<<'\n';
        }
        }
    }
    }
    return 0;
}

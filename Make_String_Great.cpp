#include<iostream>
#include<stack>
#include<cctype>
using namespace std;
int main()
{
    string s="abBAcC";
    stack <char> a;
    for(int i=s.size(); i>=0; i--)
    {
        if(toupper(s[i])==s[i-1] || tolower(s[i])==s[i+1])
        {
            a.push(s[i]);
            a.pop();
        }
        else
        {
            a.push(s[i]);
        }
    }
    while(!a.empty())
    {
        cout<<a.top();
        a.pop();
    }
    return 0;
}
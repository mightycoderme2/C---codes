#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string s = "(){}[](]";
    stack <char> a;
    stack <char> b; 
    char x='\0';
    for (int i = 0; i <s.size(); i++)
    {
        a.push(s[i]);
        cout<<a.top()<<" "<<x<<'\n';
        if((a.top()==')' && x=='(' )||(a.top()==']' && x=='[' )||(a.top()=='}' && x=='{' ))
        {
            a.pop();
            a.pop();
        }
        if(a.empty())
    {
        x='\0';
    }
    else
    {
        x=a.top();
    }

    }
    if(a.empty())
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}
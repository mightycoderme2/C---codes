#include<iostream>
#include<set>
using namespace std;

int calculate(string s) {
    int ans = 0;
    int prevNum = 0;
    int currNum = 0;
    char op = '+';

    for (int i = 0; i < s.length(); ++i) {
      const char c = s[i];
      if (isdigit(c))
        currNum = currNum * 10 + (c - '0');
      if (!isdigit(c) && !isspace(c) || i == s.length() - 1) {
        if (op == '+' || op == '-') {
          ans += prevNum;
          prevNum = op == '+' ? currNum : -currNum;
        } else if (op == '*') {
          prevNum *= currNum;
        } else if (op == '/') {
          prevNum /= currNum;
        }
        op = c;
        currNum = 0;
      }
    }

    return ans + prevNum;
  }

void permutate(int a[],int i,int n,char b[],int n1,string s,int target,set<string>&c)
{
    if(i==n)
    {
        s=s.substr(0,s.length()-1);
        cout<<s<<' '<<calculate(s)<<'\n';
        if(calculate(s)==target)
        {
            c.insert(s);
        }
        s="";
        return;
    }
    s=s+(char)(a[i]+'0');
    for(int j=0;j<n1;j++)
    {
    permutate(a,i+1,n,b,n1,s+b[j],target,c);
    }
}
int main()
{
    int a[]={1,2,5},n=3,target=7;
    char b[]={'+', '-', '*','\0'},n1=4;
    string s="";
    set<string>c;
    permutate(a,0,n,b,n1,s,target,c);
    set<string>::iterator it;
    for(it=c.begin();it!=c.end();it++)
    {
        cout<<*it<<'\n';
    }
    return 0;
}

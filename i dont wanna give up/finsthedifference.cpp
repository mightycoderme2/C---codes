#include<iostream>
using namespace std;
int main()
{
    string s="abcd",t="baedc";
    int ans=0;
    for(int i=0;i<t.size();i++)
    {
        if(i<s.size())
        {
            ans=ans+(t[i]-s[i]);
        }
        else
        {
            ans=ans+t[i]-'a'+1;
        }
    }
    cout<<(char)(ans+'a'-1);
    return 0;
}

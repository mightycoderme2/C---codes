#include<iostream>
using namespace std;
int main()
{
    string a="catsanddog";
    string b[]={"cat","cats","and","sand","dog"};
    for(int i=0; i<sizeof(b)/sizeof(b[0]); i++)
    {
        cout<<b[i]<<" ";
    }
    
    return 0;
}
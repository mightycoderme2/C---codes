#include<iostream>
#include<map>
using namespace std;
int main()
{
    string x="nitin";
    int count[26]={0};
    for(int y:x)
    {
        count[y-'a']++;
    }
    int x1=-1;
    for(int i=0;i<sizeof(count)/sizeof(count[0]);i++)
    {
        if(count[i]==1)
        {
            x1=i;
            break;
        }
    }
    cout<<x1;
    return 0;
}

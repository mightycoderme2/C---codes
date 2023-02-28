#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string a="aabbbbbbccccccdddddddd";
    int count =1,max=0;
    for(int i=0;i<a.length()-1;i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
            if(count>max)
            {
                max=count;
            }
        }
        else
        {
            count=1;
        }
    }
    cout<<count;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    string a="AAA";
    int result=0;
    for(char x:a)
    {
        int y=x-'A'+1;
        result=result*26+y;
    }
    cout<<result<<endl;
    return 0;
}

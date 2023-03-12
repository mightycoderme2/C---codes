#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>a;
    a.push(1);
    cout<<a.top();
    a.pop();
    a.push(3);
    cout<<!a.empty()?a.top():0;
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int candies=10,num_people=3,i=1;
    vector<int>a(num_people,0);
    while(candies!=0)
    {
        cout<<candies<<i<<'\n';
        if(candies>i)
        {
            a[(i-1)%num_people]=a[(i-1)%num_people]+i;
            candies=candies-i;
        }
        else
        {
            a[(i-1)%num_people]=a[(i-1)%num_people]+candies;
            candies=0;
        }
        i++;
    }
    for(auto x:a)
    {
        cout<<x;
    }
    return 0;
}

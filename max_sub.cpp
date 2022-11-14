#include<iostream>
using namespace std;
int main()
{
    int sum=0,max=0;
    int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    for(int i=0;i<sizeof(nums)/sizeof(int);i++)
    {
        sum=sum+nums[i];
        if(sum>max)
        {
            max=sum;
        }
        if(sum<0)
        {
        sum=0;
    }
    }
    cout<<max;
    return 0;
}
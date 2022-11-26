#include<iostream>
using namespace std;
double medain(int c[],int n)
{
    double count =0;
    for(int i = 0; i < n; i++)
    {
        count=count+c[i];
    }
    return count/n;
}
int main()
{
    string a[]={ "addNum", "addNum", "findMedian", "addNum", "findMedian"};
    int b[]={1, 2, 0, 3, 0};
    int c[sizeof(b)/sizeof(b[0])];
    int j=0;
    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++)
    {
        if(a[i]=="addNum")
        {
            c[j]=b[i];
            j++;
        }
        if(a[i]=="findMedian")
        {
            cout<<medain(c,j)<<" ";
        }
    }
    return 0;
}
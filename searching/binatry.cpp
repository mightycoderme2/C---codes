#include<iostream>
using namespace std;
int binarysearch(int a[],int start,int end,int element)
{
    int mid=(start+end)/2;
    if(a[mid]==element)
    {
        return mid;
    }
    else if(a[mid]>element)
    {
        binarysearch(a,start,mid,element);
    }
    else if(a[mid]<element)
    {
        binarysearch(a,mid+1,end,element);
    }
}
int main()
{   
    int a[] = {1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<binarysearch(a,0,n,2);
    return 0;
}
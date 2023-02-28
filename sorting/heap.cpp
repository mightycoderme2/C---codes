#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void print_array(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}
void heapify(int a[],int i,int n)
{
    int large=i,left=2*i +1,right=2*i +2;
    //cout<<left<<right;
    if(left<n && a[left]>a[large])
    {
        large=left;
    }
    if(right<n && a[right]>a[large])
    {
        large=right;
    }
    //cout<<large<<i;
    if(large!=i)
    {
        swap(&a[i],&a[large]);
        heapify(a,large,n);
    }
}
int main()
{
    int a[] = {48, 10, 23, 43, 28, 26, 1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<n;
    for(int i=n/2-1;i>=0;i--)
    {
        cout<<i<<'\n';
        heapify(a,i,n);
    }
    print_array(a,n);
    for(int i=n-1;i>=0;i--)
    {
        swap(&a[i],&a[0]);
        heapify(a,0,i);
    }
    print_array(a,n);
    return 0;
}
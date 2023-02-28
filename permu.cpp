#include<iostream>
using namespace std;
int a[]={1,2,3,4},n=sizeof(a)/sizeof(a[0]),count=0;
void print_array(int a[],int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    cout<<'\n';
}
void swap(int *x,int *y) {
    int temp=*x;
    *x=*y;
    *y=temp;
    //print_array(a,n);
}
void permutate(int a[],int i,int n)
{
    if(i==n-1)
    {
        print_array(a,n);
        count=count+1;
    }
    for(int j=i;j<n;j++)
    {
        swap(&a[i],&a[j]);
        permutate(a,i+1,n);
        swap(&a[i],&a[j]);
    }
}
int main()
{
    permutate(a,0,n);
    cout<<count;
    return 0;
}
#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp=*x;
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
int main()
{
    int a[]={1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    print_array(a,n);
    int i=0,j=sizeof(a)/sizeof(a[0])-1;
    while(i!=j && i<j)
    {
        swap(&a[i],&a[j]);
        i++;
        j--;
    }
    print_array(a,n);
    return 0;
}
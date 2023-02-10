#include<iostream>
using namespace std;
int a[]={1,2,3},n=3;
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
    print_array(a,n);
}
int main()
{
    print_array(a,n);
    for(int i = 0; i < n; i++)
    {
     for(int j = 0; j < n; j++)
    {
        if(i!=j)
        {
        swap(&a[i],&a[j]);
    }
    }
    }

    return 0;
}
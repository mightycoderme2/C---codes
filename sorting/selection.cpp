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

void selection(int a[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min=i,ini=a[i];
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        swap(&a[min],&a[i]);
    }
}
int main()
{
    /*
    // dynamic entry
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    */
    int a[] = {64, 25, 12, 22, 11};
    int n=sizeof(a)/sizeof(a[0]);
    selection(a,n);
    print_array(a,n);
    return 0;
}
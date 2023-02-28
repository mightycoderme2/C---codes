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

int partition(int a[],int low,int high)
{
    int pivot=a[low];
    int j=low;
    for(int i=low+1; i<high; i++)
    {
        if(a[i]<pivot)
        {
            swap(&a[i],&a[j]);
            j=j+1;
        }
    }
    swap(&pivot,&a[j]);
    print_array(a,6);

    return j;

}
void quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int pivot=partition(a,low,high);
        quicksort(a,low,pivot);
        quicksort(a,pivot+1,high); 
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
    int a[] = {64, 25, 12, 22, 11,15};
    int n=sizeof(a)/sizeof(a[0]);
    print_array(a,n);
    quicksort(a,0,n);
    print_array(a,n);
    return 0;
}
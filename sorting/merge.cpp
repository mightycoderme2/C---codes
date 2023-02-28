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

void createarrays(int a[], int l ,int mid ,int r)
{
    int llength=mid-l+1;
    int rlength=r-mid;
    int * left = new int[llength];
    int * right = new int[rlength];
    for(int i=0;i<llength;i++)
    {
        left[i]=a[i+l];
    }
    for(int i=0;i<rlength;i++)
    {
        right[i]=a[i+mid+1];
    }
    int i=0,j=0,k=l;
    while(i<llength && j<rlength)
    {
        if(left[i]>=right[j])
        {
            a[k]=right[j];
            j++;
        }
        else
        {
            a[k]=left[i];
            i++;
        }
        k++;
    }
    while(i<llength)
    {
        a[k]=left[i];
        i++;
        k++;
    }
    while(j<rlength)
    {
        a[k]=right[j];
        j++;
        k++;
    }
    print_array(a,6);
    delete[] left;
    delete[] right;
}

void merge(int a[],int l,int r)
{
    if(l>=r)
    {
        return;
    }
    int mid =  l+ (r - l) / 2;
    merge(a,l,mid);
    merge(a,mid+1,r);
    createarrays(a,l,mid,r);

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
    merge(a,0,n-1);
    print_array(a,n);
    return 0;
}
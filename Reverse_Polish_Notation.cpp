#include<iostream>
#include <vector>
using namespace std;
int deleteElement(char arr[], int n, int x)
{
int i;
for (i=0; i<n; i++)
    if (arr[i] == x)
        break;
 
if (i < n)
{
    n = n - 1;
    for (int j=i; j<n; j++)
        arr[j] = arr[j+1];
}
}
int main()
{
    char a[] ={'2','1','+','3','*'};
    int k,j,sum=0,i=0;
    int n1=sizeof(a)/sizeof(a[0]);
    while(n1!=1)
    {
        cout<<a[i]<<' '<<i<<'\n';
        if(!isalnum(a[i]))
        {
            j=i-1;
            k=i-2;
            switch(a[i])
            {
                case '+':sum=int(a[k])+int(a[j])-48-48;
                break;
                case '-':sum=int(a[k])-int(a[j])-48+48;
                break;
                case '*':sum=((int(a[k])-48)*(int(a[j])-48));
                break;
                case '/':sum=((int(a[k])-48)/(int(a[j])-48));
                break;
            }
            sum=static_cast<char>(sum);
            a[i]=sum+48;
            deleteElement(a,sizeof(a)/sizeof(a[0]),a[j]);
            deleteElement(a,sizeof(a)/sizeof(a[0]),a[k]);
    n1=n1-2;
            i=-1;
        }
        i++;
    }
    
    cout<<sum;
    
    return 0;
}
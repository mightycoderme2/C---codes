#include<iostream>
using namespace std;
void permutate(char a[],int k,int n,string s)
{
    s=s+a[k];
    if(k==n-1)
    {
        //cout<<int(s[0]-48);
        cout<<s<<'\n';
        s="";
        return;
    }
    permutate(a,k+1,n,s+" ");
    permutate(a,k+1,n,s+'\0');

}
int main()
{
    char a[]={'1','2','3'},k=0,n=3;
    string s="";
    permutate(a,k,n,s);
    return 0;
}


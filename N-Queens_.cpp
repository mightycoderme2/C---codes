#include<iostream>
using namespace std;
void print(char a[4][4])
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}
char make_queen(char a[4][4],int i,int j)
{
    a[i][j]='Q';
    for(int i1=0; i1<4; i1++)
    {
        a[i1][j]='V';
    }
    for(int j1=0; j1<4; j1++)
    {
        a[i][j1]='V';
    }
    
    int i3=i,j3=j;
    while((i3<4 && i3>=0) || (j3<4 && j3>=0))
    {
        a[i3][j3]='V';
        i3++;
        j3++;
    }
    i3=i;
    j3=j;
    
    while((i3<4 && i3>=0) || (j3<4 && j3>=0))
    {
        a[i3][j3]='V';
        i3--;
        j3--;
    }
    i3=i;
    j3=j;
    if(j3!=0)
    {
    while((i3<4 && i3>=0) || (j3<4 && j3>=0))
    {
        a[i3][j3]='V';
        i3--;
        j3++;
    }
    i3=i;
    j3=j;
    print(a);
    }
    if(i3!=0)
    {
    while((i3<4 && i3>=0) || (j3<4 && j3>=0))
    {
        a[j3][i3]='V';
        i3--;
        j3++;
    }
    
    }
    a[i][j]='Q';
    
   print(a);
}
int main()
{
    int n=4;
    char a[4][4];
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            a[i][j]='.';
        }
    }
    print(a);
    make_queen(a,1,0);
    
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(a[i][j]=='.')
            {
                make_queen(a,i,j);
            }
        }
    }
    make_queen(a,1,0);
    print(a);
    return 0;
}
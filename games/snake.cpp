#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<cstdlib>
#include<unistd.h>
using namespace std;
void draw(int x,int y,int a,int b,int o)
{
    for(int i=0; i<20;i++)
    {
    for(int j=0; j<20;j++)
    {
        if(i==0||j==0||i==19||j==19)
        cout<<"*";
        else if(i==x&&j==y)
        cout<<"0";
        else if(i==a&&j==b)
        cout<<"@";
        else
        cout<<" ";
    }
        cout<<"\n";
    } 
    cout<<"score="<<o;
     
}
int main()
{
    int i=10,j=10,k=5,l=5,o=0;
    draw(10,10,k,l,o);
    char ch='w';
    while(true)
  { 
        switch(ch)
        {
            case 'w':i=i-1;
            break;
            case 'a':j=j-1;
            break;
            case 's':i=i+1;
            break;
            case 'd':j=j+1;
            break;
        }
        system("cls");
        if(i==k&&j==l)
        {
            k=rand()%20;
            l=rand()%20;
            while(l==0||k==0||k==19||l==19)
            {
            k=rand()%20;
            l=rand()%20;
            }
            o=o+1;
        draw(i,j,k,l,o);
        }
        else
        {
        draw(i,j,k,l,o);
        }
        if(i<=0||j<=0||i>=19||j>=19)
        {
        system("cls");
    cout<<"score="<<o;
        break;
        }
        sleep(0.01);
        ch=getch();
    }
    return 0;
}
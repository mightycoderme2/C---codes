#include<iostream>
using namespace std;
int main()
{
    string a="3[a2[c]]";//3[a]2[bc] //2[abc]3[cd]ef
    int i=0,counter=0,b_count=0,k_final;
    string c="";
    while(i<a.size())
    {
        if(a[i]=='[')
        {
        int k_initial=i;
        while(i<a.size())
        {
        if(a[i]=='[')
        {
        counter=counter+1;
        //cout<<counter<<'\n';
        }
        if(a[i]==']')
        {
        counter=counter-1;
        //cout<<counter<<'\n';
        if(counter==0)
        {
            k_final=i;
            break;
        }
        }
        i=i+1;
        }
        //cout<<k_final<<'\n';
        string b="";
        for(int j=k_initial+1;j<k_final; j++)
        {
            b=b+a[j];
        }
        for(int j=0;j<a[k_initial-1]-48; j++)
        {
            c=c+b;
        }
        string d="";
        //cout<<a<<" "<<c<<" "<<k_initial<<" "<<k_final;
        for(int j=0;j<a.size(); j++)
        {
            if(j<k_initial-1)
            {
            d=d+a[j];
            }
            if(j==k_initial)
            {
            c=d+c;
            d="";
            }
            if(j>k_final)
            {
            c=c+a[j];
            }
        }
        //cout<<'\n'<<a<<" "<<c<<" "<<k_initial<<" "<<k_final;
        a=c;
        c="";
        i=-1;
        //cout<<'\n';
            /*
            i=i+1;
            int k=i;
            string b="";
            while(a[i]!=']' && counter==0)
            {
                b=b+a[i];
                i=i+1;
            }
            b_count=b_count+1;
            cout<<b<<'\n';
            a=a.erase(k,k);
            a=a.erase(i-1,i-1);
            cout<<b;
            b="";
            */
        
        }
        i++;
    }
    cout<<a;
    return 0;
}
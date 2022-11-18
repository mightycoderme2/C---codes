#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a="aaa";
    string b="a*";
    string c;
    int i=0;
while(a!=b)
{

    if(b[i]=='*')
        {
            b=b.erase(i,1);
            if(a.substr(0,i)==b.substr(0,i))
            {
                b=b.substr(0,i)+"*"+b.substr(i,b.size());
            }
            //cout<<b;
            if(b.substr(0,i)==a.substr(0,i))
            {
                c=b;
                b=b.substr(0,i)+b[i-1]+b.substr(i,b.size());
                i=i-1;
            }
            else
            {
                b=c;
                //cout<<i<<b[3];
                b.erase(i-1,1);
                i=0;
            }
            //b=b.substr(0,i)+b[i-1]+b.substr(i,b.size());
        }
        i++;
    }
    if(a==b)
    {
cout<<"true"<<endl;
    }
    else
    {
        cout<<"false";
    }
    return 0;
}
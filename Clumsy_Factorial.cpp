#include<iostream>
using namespace std;
int main()
{
    int n=10,count=0,ans=n;
    n--;
    while(n>0)
    {
        switch(count)
        {
            case 0:ans=ans*n;
    cout<<ans<<'\n';
            break;
            case 1:ans=ans/n;
    cout<<ans<<'\n';

            break;
            case 2:ans=ans+n;
    cout<<ans<<'\n';

            break;
            case 3:ans=ans-n;
    cout<<ans<<'\n';

            count=-1;
            break;
        }
        count++;
        n--;
    }
    cout<<ans<<'\n';
    return 0;
}
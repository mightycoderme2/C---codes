#include<iostream>
using namespace std;
class bank
{
    public:
    double amount;
    string name;
    void create(string n,double a)
    {
        amount=a;
        name=n;
    }
    void display()
    {
        cout<<name<<amount;
    }
};
int main()
{
    int ch,i=0,c1,c2;
                    string x;
                double y;
    cout<<"enter the choice";
    cin>>ch;
    bank b[10];
    while(ch!=9)
    {
        switch(ch)
        {
            case 1:
                cin>>x>>y;
                b[i].create(x,y);
                i++;
                break;
            case 2:
             cout<<"enter the account number";
             cin>>c1;
             b[c1].display();
             break;
            case 3:
            cout<<"enter the account number";
             cin>>c1;
             cout<<"enter the amount";
             cin>>c2;
            b[c1].amount=b[c1].amount+c2;
             b[c1].display();
            break;
            case 4:
            cout<<"enter the account number";
             cin>>c1;
             cout<<"enter the amount";
             cin>>c2;
            b[c1].amount=b[c1].amount-c2;
             b[c1].display();
            break;
        }
    cout<<"enter the choice";
    cin>>ch;
    }
    return 0;
}
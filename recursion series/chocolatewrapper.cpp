#include<iostream>
using namespace std;
int permutate(int money,int price,int wrap)
{
    cout<<money<<' ';
    if(money<=price)
    {
        return 0;
    }
    return money/wrap+ permutate(money/wrap+money%wrap,price,wrap);
}
int main()
{
    int money=20,price = 3, wrap = 5;
    cout<<money/price+permutate(money/price,price,wrap);
    return 0;
}

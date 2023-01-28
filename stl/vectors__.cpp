#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> nitin)
{
        for(int i=0; i<nitin.size();i++)
    {
        cout<<nitin[i]<<' ';
    }
    cout<<"\n";

}
int main()
{
    vector<int> nitin ={1,2,3,4,5,6};
    //cout<<nitin.at(0)<<" "<<nitin[0]<<" first:"<<nitin.front()<<" last:"<<nitin.back()<<" Pointer:"<<nitin.data();
    nitin.push_back(10);
    cout<<nitin.back()<<' ';
    nitin.emplace(nitin.begin()+1,1000);
    display(nitin);
    nitin.erase(nitin.begin(),nitin.begin());
    display(nitin);


    return 0;

}
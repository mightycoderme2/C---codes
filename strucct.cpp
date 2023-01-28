#include<iostream>
using namespace std;
struct nitin
{
    int age;
    void display()
    {
        cout<<age;
    }
};
int main()
{
    nitin n;
    n.age=5;
    n.display();
    return 0;
}
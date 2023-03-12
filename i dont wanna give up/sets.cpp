#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<char,greater<char>> a;
    a.insert('G');
    a.insert('F');
    a.insert('G');
    //a.erase(a.begin());
    cout<<*a.begin();
    cout<<*a.find('G');
    for (auto str : a) {
        cout << str << ' ';
    }
    cout << '\n';
    return 0;
}

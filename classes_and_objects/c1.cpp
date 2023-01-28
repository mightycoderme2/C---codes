#include<iostream>
using namespace std;
class nitin{
    public:
    int length,breadth;
    nitin(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
};

void calculateAverage(nitin n1, nitin n2) {

    // calculate the average of marks of s1 and s2 
    double average = (n1.area() + n2.area()) ;

   cout << "Average Marks = " << average << endl;

}


int main()
{
    nitin n1(1,2);
    nitin n2(1,3);
    calculateAverage(n1,n2);
    return 0;
}
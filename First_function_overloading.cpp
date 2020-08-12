/* FUNCTION OVERLOADING */
#include <iostream>
using namespace std;
int main()
{
    int area(int ,int );
    float area(float );
    int l,b;
    float r;
    cout<<"Enter the length and breadth of rectangle: ";
    cin>>l>>b;
    cout<<"\nEnter the radius of the circle: ";
    cin>>r;
    cout<<"\nArea of the Rectangle is: "<<area(l,b);
    cout<<"\nArea of the circle is: "<<area(r);
    return 0;
}

int area(int a,int b)
{
    return(a*b);
}
float area(float a)
{
    return(3.14*a*a);
}

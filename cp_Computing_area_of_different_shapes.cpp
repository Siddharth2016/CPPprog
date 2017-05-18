/* COMPUTING AREA OF DIFFERENT SHAPES */
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
double area(float l,float b);
double area(float rad);
double area(float t,float b,float h);
double area(float l,float b)
{
    return(l*b);
}
double area(float rad)
{
    return(3.14*rad*rad);
}
double area(float t,float b,float h)
{
    return(2*(t*b+t*h+b*h));
}
main()
{
    float len,bre,top,bottom,height,radius;
    double a;
    cin>>len>>bre;
    a=area(len,bre);
    cout<<fixed<<setprecision(2)<<a<<endl;
    cin>>top>>bottom>>height;
    a=area(top,bottom,height);
    cout<<fixed<<setprecision(2)<<a<<endl;
    cin>>radius;
    a=area(radius);
    cout<<fixed<<setprecision(2)<<a<<endl;
}

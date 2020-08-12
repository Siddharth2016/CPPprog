/* C++ class concept used to add complex numbers */
#include <iostream>
#include <cstdlib>
using namespace std;
class Complex
{
    int a,b;
public:
    void get_data();
    void print();
    Complex add(Complex );
};

void Complex::get_data()
{
    cout<<"Enter the data values: ";
    cin>>a>>b;
}
void Complex::print()
{
    cout<<"Answer is as added or not a="<<a<<" and b="<<b<<endl;
}
Complex Complex::add(Complex c)
{
    Complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}

main()
{
    Complex a,b,c;
    a.get_data();
    b.get_data();
    c=a.add(b);
    c.print();
    return 0;
}

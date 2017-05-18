/* Temperature conversion using class */
#include <iostream>
using namespace std;
class temp
{
    float f;
public:
    void get();
    void convert();
};

void temp::get()
{
    cin>>f;
}

void temp::convert()
{
    float c;
    c=(5*(f-32)/9);
    cout<<"Temperature in celsius is: "<<c;
}

main()
{
    temp fahrenhiet;
    cout<<"Enter value for f: ";
    fahrenhiet.get();
    fahrenhiet.convert();
    return 0;
}

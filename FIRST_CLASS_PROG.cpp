/* MY FIRST CLASS PROGRAM */
#include <iostream>
using namespace std;
class box
{
    public:
        int length;
        int breadth;
        int height;
        int volume();
};
int box::volume()
{
    return length*breadth*height;
}
main()
{
    box b1,b2;
    int vol,vol1;
    cout<<"Enter the dimensions of box 1 as length,breadth and height\n";
    cin>>b1.length;
    cin>>b1.breadth;
    cin>>b1.height;
    cout<<"Enter the dimensions of box 2 as same\n";
    cin>>b2.length;
    cin>>b2.breadth;
    cin>>b2.height;
    cout<<"Volume of box 1 is "<<b1.volume()<<"\n";
    cout<<"volume of box 2 is "<<b2.volume()<<"\n";
    return 0;
}

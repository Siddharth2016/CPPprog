/* Printing "WELL DONE" as many times as the number of input are made */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;
    while(n!=0)
    {
        cout<<"WELL DONE\n";
        n=n-1;
    }
    return 0;
}

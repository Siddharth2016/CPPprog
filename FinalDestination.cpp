/* FINAL DESTINATION */
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
    long int len(string A);
    string A;
    long int i=0,j;
    char x;
    long int x1=0,y1=0;
    cin>>A;
    while(A[i]!='\0')
    {
        x = A[i];
        if(x == 'L')
        {
            x1--;
        }
        else if(x == 'R')
        {
            x1++;
        }
        else if(x == 'U')
        {
            y1++;
        }
        else if(x == 'D')
        {
            y1--;
        }
        i++;
    }
    cout<<x1<<" "<<y1<<endl;
    return 0;
}

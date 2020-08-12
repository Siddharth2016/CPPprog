/* DALTON AND COMPILER DESIGN */
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
    long int t,n,i,div1,div2;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        div1=ceil(n/2);
        if(n%2==1)
            div2=div1+1;
        else
            div2=div1;
        cout<<div1<<" "<<div2<<endl;
    }
    return 0;
}

/* SWAPPING FUNCTION TAKING REFERENCE ARGUMENTS
#include <iostream>
using namespace std;
void swapp(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    swapp(&a,&b);
    cout<<"a value: "<<a<<"\nb value: "<<b<<endl;
    return 0;
}*/

/* FUNCTION FOR CREATING VECTOR USING NEW
#include <iostream>
using namespace std;
int* neww(int m)
{
    int *f=new int[m];
    return f;
}
int main()
{
    int a;
    int *p;
    int* neww(int m);
    cin>>a;
    p=neww(a);
    p[0]=1;
    cout<<p[0];
    return 0;
}*/

/* Printing using for loop
#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"\n";
        for(j=1;j<=i;j++)
            cout<<i;
    }
    return 0;
}*/
/* Printing Principal value table
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    float p=1000,r=0.1,val;
    int n=1,i;
    cout<<"principal"<<"\t"<<"rate"<<"\t"<<"year"<<"\t"<<"value"<<endl;
    for(i=0;i<10;i++)
    {
        val=p*pow((1+r),n);
        cout<<p<<"    \t"<<r<<"    \t"<<n<<"     \t"<<val<<endl;
        p=p+1000;
        r=r+0.1;
        n=n+1;
    }
    return 0;
}*/

/* PRINTING EXPONENTIAL TABLE */
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    float x;
    int i;
    cout<<"X"<<" ";
    for(i=1;i<=10;i++)
        cout<<i<<" ";
    cout<<"\n"<<" \t";
    for(i=1;i<=10;i++)
    {
        x=exp(-i);
        cout<<setw(3)<<ceil(x*100)/100<<" ";
    }
    return 0;
}

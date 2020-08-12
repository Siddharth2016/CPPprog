/* BINARY QUERIES */

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    unsigned long n,l,r,q,i,j,k,x,y,sum;
    cin>>n>>q;
    int A[n];
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(j=0;j<q;j++)
    {
        cin>>k;
        if(k==1)
        {
            cin>>x;
            if(A[x-1]==1)
                A[x-1]=0;
            else
                A[x-1]=1;
        }
        else if(k==0)
        {
            sum=0;
            cin>>l>>r;
            for(i=l;i<=r;i++)
            {
                y = r-i;
                y = pow(2,y);
                sum = sum + y*A[i-1];
            }
            if(sum%2!=0)
                cout<<"ODD"<<endl;
            else
                cout<<"EVEN"<<endl;
        }
    }
    return 0;
}

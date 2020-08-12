/* CHESS TOURNAMENT */
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int chess(int A[1100][1100],int B[512], int n);
    int n,i,j,k,N,a,B[512],res,A[1100][1100];
    cin>>n;
    N = int(pow(2,n));
    for(i=1; i<N; i++)
    {
        for(k=0; k<i; k++)
        {
            cin>>a;
            A[i+1][k+1]=a;
        }
    }

    i=2;
    j=1;
    k=0;
    do
    {
        if(A[i][j]==1)
        {
            B[k]=i;
            k++;
        }
        else if(A[i][j]==0)
        {
            B[k]=j;
            k++;
        }
        i=i+2;
        j=j+2;
    }while(i<N+1);

    res = chess(A,B,k);
    cout<<res<<endl;
    return 0;
}

int chess(int A[1100][1100],int B[512], int n)
{
    int i,j,k,m,l;
    i=1;
    k=0;
    if(n==1)
        return B[0];
    do
    {
        m=B[i];
        l=B[i-1];
        if(m>l)
        {
            if(A[m][l]==1)
            {
                B[k]=m;
                k++;
            }
            else if(A[m][l]==0)
            {
                B[k]=l;
                k++;
            }
        }
        else if(l>m)
        {
            if(A[l][m]==1)
            {
                B[k]=l;
                k++;
            }
            else if(A[l][m]==0)
            {
                B[k]=m;
                k++;
            }
        }

        i=i+2;
    }while(i<n);

    return chess(A,B,k);
}

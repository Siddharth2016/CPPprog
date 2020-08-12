/* WAR */
#include <iostream>
#include <cstdlib>
using namespace std;

unsigned long long int maximum(unsigned long long int A[], long int n)
{
    unsigned long long int temp,i;
    temp = A[0];
    for(i=1; i<n; i++)
    {
        if(A[i]>temp)
            temp=A[i];
    }
    return temp;
}

int main()
{
    unsigned long long int maximum(unsigned long long int A[], long int n);
    int test;
    long int N,i,j,k,countb,counta;
    cin>>test;
    for(i=0; i<test; i++)
    {
        cin>>N;
        unsigned long long int Bob[N],Alice[N],a,maxa,maxb;
        for(j=0; j<N; j++)
        {
            cin>>a;
            Bob[j]=a;
        }
        for(j=0; j<N; j++)
        {
            cin>>a;
            Alice[j]=a;
        }

        maxa = maximum(Alice,N);
        maxb = maximum(Bob,N);
        if(maxa>maxb)
            cout<<"Alice"<<endl;
        else if(maxb>maxa)
            cout<<"Bob"<<endl;
        else
            cout<<"Tie"<<endl;
    }

    return 0;
}

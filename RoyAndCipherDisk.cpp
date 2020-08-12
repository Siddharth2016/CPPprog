/* ROY AND CIPHER DISK */

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    char A[101],ch;
    int test,i,j,s,d,diff;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>A;
        j=0;
        s=0;
        while(A[j]!='\0')
        {
            ch=A[j];
            d=(int)ch-97;
            diff=d-s;
            if(-12<=diff && diff<=13)
            {
                cout<<diff<<" ";
                s=d;
            }
            else if(diff>13)
            {
                cout<<diff-26<<" ";
                s=d;
            }
            else if(diff<-12)
            {
                cout<<diff+26<<" ";
                s=d;
            }
            j++;
        }
        cout<<endl;
    }
    return 0;
}

/* BIASED CHANDAN */
#include <iostream>
#include <cstdlib>
using namespace std;
typedef struct stackk
{
    int top,capacity;
    int *A;
}stackk;

stackk* create(int n)
{
    stackk *temp;
    temp=(stackk *)malloc(sizeof(stackk));
    temp->top=-1;
    temp->capacity=n;
    temp->A=(int *)malloc(sizeof(int)*n);
    return temp;
}

void push(stackk* stc,int data)
{
    stc->top++;
    stc->A[stc->top]=data;
}

void pop(stackk* stc)
{
    stc->top--;
}

void sum(stackk* stc)
{
    int sum=0,i;
    if(stc->top==-1)
        cout<<sum;
    else
    {
        for(i=0;i<=stc->top;i++)
            sum=sum+stc->A[i];
        cout<<sum;
    }
}
int main()
{
    stackk *stc;
    int n,i,a;
    cin>>n;
    stc=create(n);
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a!=0)
            push(stc,a);
        else if(a==0 && i!=0)
            pop(stc);
    }
    sum(stc);
    return 0;
}

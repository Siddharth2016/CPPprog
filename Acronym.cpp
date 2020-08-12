/* ACRONYM FOR HARSH*/
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string.h>
using namespace std;                                    /*NOT COMPLETED*/
int main()
{
    bool found(string s,string a[],int k);
    bool f=false;
    string word[11];
    char x;
    char op[300];
    int k,n,j=0;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>word[i];
    }

    cin>>n;
    string chr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>chr[i];
    }
    chr[n]="0";
    for(int i=0;i<n;i++)
    {
        f=found(chr[i],word,k);
        if(!f)
        {
            op[j]=toupper(chr[i][0]);
            j++;
            op[j]='.';
        }
        j++;
    }
    return 0;
}

bool found(string s,string a[],int k)
{
    bool f=false;
    string x;
    for(int i=0;i<k;i++)
    {
        x=a[i];
        if(strcmp(s,x)==0)
        {
            f=true;
            break;
        }
        else
            f=false;
    }
    return f;
}

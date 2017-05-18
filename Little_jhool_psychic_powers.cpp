/* LITTLE JHOOL AND PSYCHIC POWERS */
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    string str;
    char ch;
    int i,count0=0,count1=0,flag=0;
    cin>>str;
    int len=str.length();
    for(i=0;i<len;i++)
    {
        ch=str[i];
        if(ch=='0')
        {
            //cout<<"Hello";
            count0++;
            if(count0==6)
            {
                cout<<"Sorry, sorry!";
                return 0;
            }
            else if(str[i+1]=='1')
            {
                count0=0;
            }
        }
        else if(ch=='1')
        {
            //cout<<"  hello";
            count1++;
            if(count1==6)
            {
                cout<<"Sorry, sorry!";
                return 0;
            }
            else if(str[i+1]=='0')
                count1=0;
        }
        flag=1;
    }
    if(flag)
        cout<<"Good luck!";
    return 0;
}

/* VECTOR OPERATIONS */
#include <iostream>
using namespace std;
class Vector
{
    int num;
    int ele[20];
public:
    friend istream& operator>>(istream&,Vector&);
    friend ostream& operator<<(ostream&,Vector&);
    Vector operator+(Vector&);
    Vector operator-(Vector&);
    int operator[](int);
};
istream& operator>>(istream &din,Vector &v)
{
    cin>>v.num;
    int i;
    for(i=0;i<v.num;i++)
    {
        cin>>v.ele[i];
    }
    return cin;
}
ostream& operator<<(ostream &dout,Vector &v)
{
    int i;
    for(i=0;i<v.num;i++)
        cout<<v.ele[i]<<" ";
    cout<<endl;
    return cout;
}
int Vector::operator[](int i)
{
    return(ele[i]);
}
Vector Vector::operator+(Vector &v)
{
    Vector temp;
    int i,j,k=0;
    if(num<v.num)
    {
        for(i=0;i<num;i++)
        {
            temp.ele[i]=ele[i]+v.ele[i];
        }
        for(j=num;j<v.num;j++)
        {
            temp.ele[j]=v.ele[j];
        }
        temp.num=v.num;
    }
    else if(v.num<num)
    {
        for(i=0;i<v.num;i++)
            temp.ele[i]=ele[i]+v.ele[i];
        for(j=v.num;j<num;j++)
            temp.ele[j]=ele[j];
        temp.num=num;
    }
    else
    {
        for(i=0;i<num;i++)
            temp.ele[i]=ele[i]+v.ele[i];
        temp.num=num;
    }
    return temp;
}
main()
{
    Vector v1,v2,v3;
    int i,j;
    cin>>v1;
    cin>>v2;
    cin>>i>>j;
    cout<<v1[i]<<endl;
    cout<<v2[j]<<endl;
    v3=v1+v2;
    cout<<v3;
    /*v3=v1-v2;
    cout<<v3;*/
}

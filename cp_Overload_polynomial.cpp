/* OVERLOAD POLYNOMIAL */
#include <iostream>
#include <cstdlib>
using namespace std;
class term
{
public:
    int coeff;
    int expo;
    friend istream& operator>>(istream&,term&);
    friend ostream& operator<<(ostream&,term&);
};

class poly
{
    int num;
    term *terms;
public:
    poly();
    poly(int);
    poly(poly&);
    poly operator+(poly&);
    poly operator++();
    poly operator++(int);
    friend istream& operator>>(istream&,poly&);
    friend ostream& operator<<(ostream&,poly&);
};

istream& operator>>(istream& din,poly &p)
{
    cin>>p.num;
    int i;
    for(i=0;i<p.num;i++)
    {
        cin>>p.terms[i].coeff;
        cin>>p.terms[i].expo;
    }
    return din;
}
ostream& operator<<(ostream &dout,poly &p)
{
    int i;
    for(i=0;i<p.num;i++)
    {
        cout<<p.terms[i].coeff<<"x"<<p.terms[i].expo<<" ";
    }
    cout<<endl;
    return dout;
}

poly::poly()
{
    terms=(term *)malloc(sizeof(term)*20);
}
poly::poly(int n)
{
    terms=(term *)malloc(sizeof(term)*n);
}
poly::poly(poly &p)
{
    terms=p.terms;
}

poly poly::operator++()
{
    poly temp;
    temp.terms=(term *)malloc(sizeof(term)*20);
    int i;
    for(i=0;i<num;i++)
    {
        temp.terms[i].coeff=terms[i].coeff;
        temp.terms[i].expo=terms[i].expo;
    }
    int maxx=terms[0].expo;
    int ch;
    for(i=0;i<num;i++)
    {
        if(maxx<terms[i].expo)
         {
             maxx=terms[i].expo;
             ch=terms[i].coeff;
         }
    }
    temp.terms[num].expo=maxx+1;
    temp.terms[num].coeff=ch-1;
    temp.num=num+1;
    return temp;
}

poly poly::operator+(poly &p)
{
    poly temp;
    temp.terms=(term *)malloc(sizeof(term)*20);
    int i=0,j=0,k=0,countt=0;
    for(i=0;i<num;i++)
    {
        for(j=0;j<p.num;j++)
        {
            if(terms[i].expo==p.terms[j].expo)
            {
                temp.terms[i].coeff=terms[i].coeff+p.terms[j].coeff;
                temp.terms[i].expo=terms[i].expo;
                countt++;
            }
        }
    }
    temp.num=countt;
    return temp;
}

main()
{
    poly p1,p2,p3;
    poly p4(5),p5(p4);
    poly p6,p7;
    cin>>p1>>p2;
    p3=p1+p2;
    cout<<p3;
    p7=++p1;
    cout<<p7;
    //p2++;
}

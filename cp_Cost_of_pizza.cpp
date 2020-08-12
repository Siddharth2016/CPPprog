/* COST OF PIZZA */
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
class circle
{
protected:
    float radius;
public:
    void get_c();
    void print_c();
    float area();
};
struct ingre_cost
{
  char name[30];
  float price;
};
class kitchen
{
protected:
    int num1;
    ingre_cost ing_cost[20];
public:
    void get_k();
    void print_k();
    float get_cost(char*);
};
float kitchen::get_cost(char *A)
{
    int i,j;
    for(i=0;i<num1;i++)
    {
        if(strcmp(ing_cost[i].name,A)==0)
        {
            return(ing_cost[i].price);
        }
    }
}
struct ingre_qty
{
    char name[30];
    float qty;
};
class cookeditem
{
protected:
    int num;
    ingre_qty ing_qty[20];
public:
    void get_ci();
    void print_ci();
};
class pizza: public circle,public cookeditem
{
protected:
    double cost;
public:
    void get_p()
    {
        cin>>radius;
        cin>>num;
        int i;
        for(i=0;i<num;i++)
        {
            cin>>ing_qty[i].name;
            cin>>ing_qty[i].qty;
        }
    }
    void compute_cost(kitchen &k)
    {
        cost=0;
        int i;
        for(i=0;i<num;i++)
        {
            cost=cost+k.get_cost(ing_qty[i].name)*ing_qty[i].qty;
        }
    }
};

void kitchen::get_k()
{
    cin>>num1;
    int i;
    for(i=0;i<num1;i++)
    {
        cin>>ing_cost[i].name;
        cin>>ing_cost[i].price;
    }
}
class veg_pizza: public pizza
{
public:
    void print_p()
    {
        cout<<fixed<<setprecision(2)<<cost+50<<endl;
    }
};
class chik_pizza: public pizza
{
public:
    void print_p()
    {
        cout<<fixed<<setprecision(2)<<cost+100<<endl;
    }
};
/* Create another class pizza that inherits circle and cookeditem
veg_pizza inherits pizza and chik_pizza inherits pizza */

int main()
{
    int ch;
    cin>>ch;
    if(ch==0)
    {
        veg_pizza p;
        //get radius of circle(pizza)
        //get ingredients and quantity required for 1 cm2
        p.get_p();
        //get items in kitchen and their cost
        kitchen k;
        k.get_k();
        //compute cost
        p.compute_cost(k);
        p.print_p();
    }
    else
    {
        if(ch==1)
        {
            chik_pizza c;
            c.get_p();
            kitchen k1;
            k1.get_k();
            c.compute_cost(k1);
            c.print_p();
        }
    }
}

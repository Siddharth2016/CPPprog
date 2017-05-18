/* ELECTRONICS STORE PROBLEM */
#include <iostream>
using namespace std;
class store_keeper;
class item
{
    char prod_name[30];
    char prod_code[10];
    float prod_price;
    int stock_in_hand;
public:
    void get();
    void print() const;
    friend class store_keeper;
};
class store
{
    int num_of_items;
    item items[20];
public:
    void get_details();
    void print_details() const;
    friend class store_keeper;
};
class store_keeper
{
    char name[30];
    char id[10];
public:
    void get();
    void print();
    //function used to print name and id of products with stock_in_hand less than 10
    void stock_mgmt(store &);
};

void store::get_details()
{
    cin>>num_of_items;
    int i;
    for(i=0;i<num_of_items;i++)
    {
        items[i].get();
    }
}
void item::get()
{
    cin>>prod_name;
    cin>>prod_code;
    cin>>prod_price;
    cin>>stock_in_hand;
}

void store_keeper::stock_mgmt(store &s)
{
    int i;
    for(i=0;i<s.num_of_items;i++)
    {
        if(s.items[i].stock_in_hand<10)
            cout<<s.items[i].prod_name<<endl;
    }
}

main()
{
    store s;
    store_keeper sk;
    s.get_details();
    sk.stock_mgmt(s);
}

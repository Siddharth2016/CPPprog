/* BOARDING PASS */
#include <iostream>
#include <cstring>
using namespace std;
class boarding_pass
{
private:
    char passenger[10];
    char add[10];
    char date[12];
    int x;
    int age;
    char mobile_num[12];
    float fare;
public:
    void get();
    void modify_fare();
    friend void pass(boarding_pass&);
};

void boarding_pass::get()
{
    cin>>passenger;
    cin>>x;
    cin>>age;
    cin>>add;
    cin>>date;
    cin>>mobile_num;
    cin>>fare;
}

void pass(boarding_pass &obj)
{
    cout<<obj.passenger<<endl;
    cout<<"CA"<<obj.x<<endl;
    cout<<obj.age<<endl;
    cout<<obj.date<<endl;
    cout<<obj.mobile_num<<endl;
    cout<<obj.fare;
}

void boarding_pass::modify_fare()
{
    if(age<12)
        fare=fare/2;
    else if(age>=12)
        fare=0.8*fare;
    else if(age>=58)
        fare=0.6*fare;
}

int main()
{
    boarding_pass O;
    O.get();
    O.modify_fare();
    pass(O);
    return 0;
}

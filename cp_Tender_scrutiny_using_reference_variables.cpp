/* Tender scrutiny using reference variables */
#include <iostream>
using namespace std;
int main()
{
    int num_of_ten,registration_num[100],amount[100],i;
    string address[100];
    void eligible_vendor(int registration_num[],string address[],int amount[],int &n);
    cout<<"Enter the number of tenders: ";
    cin>>num_of_ten;

    for(i=0;i<num_of_ten;i++)
    {
        cin>>registration_num[i];
        cin>>address[i];
        cin>>amount[i];
    }

    eligible_vendor(registration_num,address,amount,num_of_ten);
    return 0;
}

void eligible_vendor(int registration_num[],string address[],int amount[],int &n)
{
    int i=0,minimum;
    minimum=amount[i];
    for(i=0;i<n;i++)
    {
        if(minimum>amount[i])
            minimum=amount[i];
    }
    for(i=0;i<n;i++)
    {
        if(amount[i]==minimum)
            break;
    }
    cout<<registration_num[i]<<endl;
    cout<<address[i]<<endl;
}

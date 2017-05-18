/* CHESS , CARROM AND SCRABBLE PLAYERS */
#include <iostream>
#include <cstring>
using namespace std;
class Set
{
    int num_of_ele;
    char name[30][20];
public:
    void get();
    void print() const;
    Set intersection(Set&);
    Set difference(Set&);
};

void Set::get()
{
    cin>>num_of_ele;
    int i;
    for(i=0;i<num_of_ele;i++)
    {
        cin>>name[i];
    }
    //name[i+1]='\0';
}

void Set::print() const
{
    int i=0;
    //cout<<num_of_ele<<endl;
    cout<<endl;
    for(i=0;i<num_of_ele;i++)
    {
        cout<<name[i]<<", ";
    }
}

Set Set::intersection(Set &s)
{
    Set temp;
    int k=0,i=0,j=0;
    for(i=0;i<num_of_ele;i++)
    {
        j=0;
        while(strcmp(name[i],s.name[j])!=0 && j<s.num_of_ele)
            j++;
        if(strcmp(name[i],s.name[j])==0)
        {
            strcpy(temp.name[k],name[i]);
            k++;
        }
    }
    temp.num_of_ele=k;
    return temp;
}

Set Set::difference(Set &s)
{
    Set temp;
    int i=0,j=0,k=0;
    for(i=0;i<num_of_ele;i++)
    {
        j=0;
        int flag=1;
        while(j<s.num_of_ele)
        {
            if(strcmp(name[i],s.name[j])==0)
            {
                flag=0;
                break;
            }
            j++;
        }
        if(flag)
        {
            strcpy(temp.name[k],name[i]);
            k++;
        }
    }
    temp.num_of_ele=k;
    return temp;
}

int main()
{
    Set chess,carrom,scrabble;
    chess.get();
    carrom.get();
    scrabble.get();
    Set inter=chess.intersection(carrom);
    inter.print();
    Set diff=inter.difference(scrabble);
    diff.print();
    return 0;
}

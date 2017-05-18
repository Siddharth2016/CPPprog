/* CHESS ,SCRABBLES AND CARROM PLAYERS */ //INCOMPLETE
#include <iostream>
#include <cstring>
using namespace std;
class set
{
    public:
    int num_of_ele;
    char name[30][20];
    void get();
    void print() const;
    set intersection(set&);
    set difference(set&);
};
void set::get()
{
    cout<<"\nEnter the number of students play the corresponding game: ";
    cin>>num_of_ele;
    int i;
    for(i=0;i<num_of_ele;i++)
    {
        cin>>name[i];
        cout<<strlen(name[i])<<"\n";
    }
}
void set::print() const
{
    int i;
    for(i=0;i<num_of_ele;i++)
        cout<<name[i]<<endl;
}
set set::intersection(set &obj)
{
    set q;
    int i,j,k=0;
    for(i=0;i<num_of_ele;i++)
    {
        for(j=0;j<obj.num_of_ele;i++)
        {
            if(!strcmp(name[i],obj.name[j]))
            {
                strcpy(q.name[k],name[i]);
                k++;
                break;
            }
        }
    }
    q.num_of_ele=k;
    return q;
}
set set::difference(set &obj)
{
    set q;
    int i,j,k=0;
    for(i=0;i<num_of_ele;i++)
    {
        for(j=0;j<obj.num_of_ele;j++)
        {
            if(strcmp(name[i],obj.name[j])!=0)
            {
                strcpy(q.name[k],obj.name[j]);
                k++;
                break;
            }
        }
    }
    q.num_of_ele=k;
    return q;
}
main()
{
    set chess,scrabble,carrom;
    chess.get();
    scrabble.get();
    carrom.get();
    set inter=chess.intersection(carrom);
    inter.print();
    cout<<"\n";
    set diff=inter.difference(scrabble);
    diff.print();
    return 0;
}

/* C++ USING STRUCTURE */
#include <iostream>
#include <cstdlib>
using namespace std;
struct book
{
private:
    int bookid;
    char title[10];
    float price;
public:
    void get_data()
    {
        cout<<"Enter the name of the book,title and price respectively: "<<endl;
        cin>>bookid>>title>>price;
    }
    void print()
    {
        cout<<"Found details of the book: "<<endl;
        cout<<"Book ID: "<<bookid<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"That's all folks"<<endl;
    }
};

main()
{
    book b1;
    b1.get_data();
    b1.print();
    return 0;
}

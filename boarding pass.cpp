#include<iostream>
#include<string.h>
using namespace std;
class bo
{
	private :
		      char name[100];
		      int x;
		      char add[100];
		      char date[100];
		      char mobile[100];
	public  :
		      int age;
		      int fare;
		      void getdetail()
		      {
		      	cout<<"enter the detail\n";
		      	cin>>name;
		      	cin>>x;
		      	cin>>age;
		      	cin>>add;
		      	cin>>date;
		      	cin>>mobile;
		      	cin>>fare;
			  }
			  void printdetail()
			  {
                cout<<name<<"\n";
                cout<<"CA"<<x<<"\n";
                cout<<age<<"\n";
				cout<<date<<"\n";
				cout<<mobile<<"\n"; 
			  }
}c1;

void discount(int age,float fare)
{
	float a;
	if(age<12)
	{
		a=fare-(fare/2);
		cout<<a;
	}
	else if(age>57)
	{
		a=fare-(0.4)*fare;
		cout<<a;
	}
	else
	{
		a=fare-(0.2)*fare;
		cout<<a;
	}
}

int main()
{
	int m , n;
	c1.getdetail();
	c1.printdetail();
	m=c1.age;
	//cout<<"\nthe c1.age = "<<m;
	n=c1.fare;
	//cout<<"\nthe c1.fare = "<<n;
	discount(m,n);
	return 0;
}

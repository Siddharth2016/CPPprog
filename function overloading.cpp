#include<iostream>
#include<iomanip>
using namespace std;

float area(float len,float bre)
{
	float n;
	n=len*bre;
	return n;
}

float area(float top,float bottom,float height)
{
	float n;
	n=height*(top+bottom)/2;
	return n;
}

float area(float radius)
{
	float n , pi=3.14;
	n=pi*radius*radius;
	return n;
}

int main()
{
	float len , bre , top , bottom , height , radius;
	double a;
	cin>>len>>bre;
	a = area(len,bre);
	cout<<fixed<<setprecision(2)<<a<<endl;
	cin>>top>>bottom>>height;
	a = area(top,bottom,height);
	cout<<fixed<<setprecision(2)<<a<<endl;
	cin>>radius;
	a = area(radius);
	cout<<fixed<<setprecision(2)<<a<<endl;
	return 0;
}

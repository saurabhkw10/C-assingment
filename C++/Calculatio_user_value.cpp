#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter First Value \n";
	cin>>a;
	cout<<"Enter Second Value \n";
	cin>>b;
	cout<<"Enter Third Value \n";
	cin>>c;
	a=b;
	b=c;
	c=a-b;
	cout<<"a is "<<a<<"\n"<<"b is "<<b<<"\n"<<"c is "<<c;
	return 0;
}
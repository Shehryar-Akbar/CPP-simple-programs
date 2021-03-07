#include<iostream>
using namespace std;

int prod()
{
	int a,b;
	cout<<"\nenter a number ";cin>>a;
	cout<<endl<<"enter the 2nd one ";cin>>b;
	return (a*b);
}
int main()
{
	cout<<"This is the call to the function ";
	int mul=prod();
	cout<<"\nThe product of the two numbers is "<<mul;
}

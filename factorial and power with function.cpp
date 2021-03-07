#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;
int pow(int a,int b);
int fact(int n)
{
	int rest=1;
	for(int i=n; i>=1; i--)
	{
		rest=rest*i;
	}
	return rest;
}
int main()
{	
	int m,n;
	cout<<"Enter the value of x ";
	cin>>m;
	cout<<"enter the power ";
	cin>>n;
	int pwr=pow(m,n);
	cout<<"\nthe power of the given number is "<<pwr;
	cout<<"\nEnter a number to find its factorial ";
	int n1;
	cin>>n1;
	int fac=fact(n1);
	cout<<"factorial is "<<fac;
	
}
int pow(int a,int b)
{
	int res=1;
	for(int i=1; i<=b; i++)
	{
		res=res*a;
	}
	return res;
}

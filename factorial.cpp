#include<iostream>
using namespace std;
int main()
{
	int n=1,fac=1;
	cout<<"enter any number to calculate its factorial  ";
	cin>>n;
	if(n>=0)
	{
	for(int i=n; i>=1; i--)
	{
		fac= fac*i;
	}
	cout<<"\nFactorial of the given number is = "<<fac;
	}
	else 
	cout<<"enter a positive number,"
		<<" because factorial of a negative number is not possible";
	return 0;
}

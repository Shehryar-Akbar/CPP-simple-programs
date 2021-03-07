#include<iostream>
using namespace std;
int fac(int a);
int main()
{
	cout<<"factorial program\n";
	int a;
	cout<<"enter a number ";cin>>a;
	int res=fac(a);
	cout<<"the factorial of the number is "<<res;
	return 0;
	
}
int fac(int a)
{	int fact=1;
	for(int i=a; i>=1; i--)
		{
			
			fact=fact*i;
		}
		return (fact);
}

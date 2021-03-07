#include<iostream>
using namespace std;
int power(int a, int b)
{
	int res=1;
	for(int i=1; i<=b; i++)
	{
		res=res*a;
	}
	return (res);
}
int main(){
	cout<<"This the program to find the power of any number\n";
	int x,y;
	cout<<"Enter a number ";cin>>x;
	cout<<"Enter the power for number ";cin>>y;
	int res=power(x,y);
	cout<<"the power of the number is "<<res;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	for(int i=1; i<=10; i++ )
	{
		int n;
		cout<<"enter any number ";cin>>n;
		if(n%2==0)
		cout<<"the number is even";
		else
		cout<<"the number is odd";
		cout<<endl;
	}
	return 0;
}

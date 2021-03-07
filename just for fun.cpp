#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number ";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		
		for(int s=n-i; s>0; s--)
			{
				cout<<" ";
			}
		for(int j=1; j<=i; j++)
			{
					
				cout<<"* ";
			}
			cout<<endl;	
	}
	return 0;
}

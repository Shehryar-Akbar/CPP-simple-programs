#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cout<<"enter any positive number  ";
	cin>>n;
	if(n>=1)
	{
		for(int i=n; i>=1; i--)
		{
			cout<<setw(4);
			for(int j=i; j>=1; j--)
			cout<<" * ";
			cout<<setw(4);
			cout<<endl;
			
		}
	}
	else 
	cout<<"enter number greater then 1";
	return 0;
}


//for (i = 5; i >= 1; i--)


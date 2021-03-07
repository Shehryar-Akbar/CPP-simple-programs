#include<iostream>
using namespace std;
int main()
{
	int a[2][2];
	cout<<"enter the element of first matrix"<<endl;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			cin>>a[i][j];
			cout<<"     ";
		}
		cout<<endl;
	}
	int b[2][2];
	cout<<"\nenter the element of second matrix"<<endl;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			cin>>b[i][j];
			cout<<"     ";
		}
		cout<<endl;
	}
	int pro[2][2];
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			pro[i][j]=0;
			
			for(int k=0; k<2; k++)
			{
				pro[i][j] += a[i][k]*b[k][j];
				
			}
		
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<pro[i][j];
			cout<<"     ";
		}
		cout<<endl;
	}
}

#include<iostream>
using namespace std;
int main()
{
	int a[2][2]={3,0,4,10};
	int *ptr;
	int max=a[1][0];
	int min=a[0][0];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{	
			ptr=&a[i][j];
			if(*ptr>max)
			{
				max=*ptr;
			}
			if(*ptr<min)
			{
				min=*ptr;
			}
			
		}
	}
	cout<<max;
	cout<<endl<<min;
}

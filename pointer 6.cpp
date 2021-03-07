#include<iostream>
using namespace std;
int main()
{
	int a[2][2]={3,7,4,10};
	int *ptr;
	int count1=0,count2=0;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{	
			ptr=&a[i][j];
			if(*ptr%2==0)
				{
					count1+=1;
				}
			else if(*ptr%2==1)
				{
					count2+=1;
				}
			
		}
	
	}
		cout<<count1<<endl;
		cout<<count2;
}

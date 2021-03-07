#include<iostream>
using namespace std;
int main()
{
	int arr[5]={2,3,4,5,6};
	int max=arr[2];
	int min=arr[4];
	int *ptr;
	
	for(int i=0;i<5;i++)
	{
		ptr=&arr[i];
		if(*ptr > max)
		{
			max=*ptr;
		}
		if(*ptr < min)
		{
			min=*ptr;
		}
	}
	cout<<"the max number is "<<max;
	cout<<"\nthe min number is "<<min;
}

#include<iostream>
using namespace std;
int main()
{
	int arr[5]={2,3,4,5,6};
	int odd=0;
	int even=0;
	int *ptr;
	
	for(int i=0;i<5;i++)
	{
		ptr=&arr[i];
		if(*ptr%2==0)
		{
			even=even+1;
		}
		if(*ptr%2==1)
		{
			odd=odd+1;
		}
	}
	cout<<"there are "<<even<<" even numbers";
	cout<<"\nthere are "<<odd<<" odd numbers";
}

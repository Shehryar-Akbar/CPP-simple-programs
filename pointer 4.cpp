#include<iostream>
using namespace std;
int main()
{
	int a[3]={2,3,4};
	int *ptr;
	for(int i=0;i<3;i++)
	{
		cout<<&a[i];cout<<endl;
		ptr=&a[i];
		cout<<a[i]<<"  "<<ptr;
		cout<<endl;
		
	}
}

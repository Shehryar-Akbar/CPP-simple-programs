#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,2,3,4,5};;
	char *a;
	for(int i=65;i<93;i++)
	{
		char ch=char(i);
		a=&ch;
		cout<<ch<<" Its address is "<<a;
		cout<<endl;
	}
	
	
//	cout<<&arr[3];
//	cout<<endl;
}

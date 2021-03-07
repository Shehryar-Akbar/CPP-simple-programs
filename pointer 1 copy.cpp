#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,2,3,4,5};
	char *a;
	char ch;
	for(int i=65;i<=90;i++)
	{
		ch=char(i);
		a=&ch;
		cout<<char(i)<<" Its address is "<<a;
		cout<<endl;
	}
	
	

}

#include<iostream>
using namespace std;
int main()
{
	int a[2][3]={3,5,-5,-4,6,8};
	int count=0;
	for (int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(a[i][j]%2==0)
				count=count+1;
		}
	}
	cout<<count;
}


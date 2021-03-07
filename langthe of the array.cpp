#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{	
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			for(int k=0; k<5; k++)
			{
//				cin>>d[i][j][k[;
				int d[i][j][k]= rand()%50;
				cout<<d[i][j][k];
				
			}
		}
	}
}

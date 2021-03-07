#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int sum=0;
	int i,j,k;
	int d[][][];
	for( i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			for(k=0; k<5; k++)
			{
				d[i][j][k]= rand()%50+1;
				sum=sum+d[i][j][k];
				cout<<endl;	
			}
		}
	}
	cout<<sum;
}






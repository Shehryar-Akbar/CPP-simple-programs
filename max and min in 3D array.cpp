#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	
	int i,j,k;
	int d[i][j][k];
	int max=d[i][j][k];
	int min=d[i][j][k];
	for( i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			for(k=0; k<5; k++)
			{
				if(max > d[i][j][k])
				{
					max = d[i][j][k];
				}
				if(min < d[i][j][k])
				{
					min = d[i][j][k];
				}

				
			}
		}
	}
	cout<<max;
	cout<<endl;
	cout<<min;
}


#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main()
{
	int collection[100][200];
	srand(time(NULL));
	
	for(int i=0; i<100; i++)
	{
		
	
		for(int j=0; j<200; i++)
		{
			collection[i][j]=rand()%100+1;
			cout<<collection[i][j]<<" ";	
		}
	}
	return 0;
}



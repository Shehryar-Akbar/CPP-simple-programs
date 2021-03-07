#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main()
{
	int collection[10][20];
	srand(time(NULL));
	for(int i=0; i<10; i++)
		for(int j=0; j<20; i++)
		{
			collection[i][j]=rand()%50-1;
			cout<<collection[i][j];
			cout<<endl;
			
		}
	
}



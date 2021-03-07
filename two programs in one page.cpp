/*Execution of loopto unknown number of times*/
#include<iostream>
using namespace std;
int main()
{
	int sum;
	int i=1;
	int square;
	do
		{
			square = i*i;
			sum=sum+(i*i);
			cout<<"the square of the "<<i<<" is "<<square<<endl;
			i++;
		
		}
			while(i<=10);
	
		cout<<"the sum of the spuare of there squares is "<<sum<<endl;
		cout<<"1^2 + 2^2 + 3^2 + 4^2 + 5^2 + 6^2 + 7^2 + 8^2 + 9^2 + 10^2   = "<<sum<<endl;
	
	
	
	int sum1;
	int i1=1;
	int square1;
	for( ;i1<=10; i1++)
		{
			square1 = i1*i1;
			sum1=sum1+(i1*i1);
			cout<<"the square of the "<<i1<<" is "<<square1<<endl;
		}
return 0;
}


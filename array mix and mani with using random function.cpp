#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	int i;
	srand((unsigned)time(0));
    int arr[100];
  	for (i=0; i<100; i++) 
    {	
    arr[i]= (rand() % 100 + 1);
	cout<<arr[i]<<endl; 
	}
foa(i=0;i<100;i++)
	{
		int min= arr[0];
		int max= arr[0];
		if(min > arr[i])	
		{
			min = arr[i];
		}	
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	cout<<"the manimum number is " <<min;
	cout<<"the maximum number is " <<max;
  reaturn 0;
}

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int arr1[2][3]={{2,3,4},{2,1,2}};
	int arr2[2][3]={{1,2,1},{1,2,1}};
	int arr3[2][3];
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<setw(3);
			cout<<arr1[i][j];
		}
		cout<<endl;
	}
	cout<<endl;		cout<<"this is the second one "<<endl;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<setw(3);
			cout<<arr2[i][j];
		}
		cout<<endl;
	}
	cout<<endl; 	cout<<"this is the su of the two matrices "<<endl;
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			arr3[i][j]= arr1[i][j]-arr2[i][j];
			cout<<setw(3);
			cout<<arr3[i][j];
		
		}
		cout<<endl;
	}
	return 0;
}

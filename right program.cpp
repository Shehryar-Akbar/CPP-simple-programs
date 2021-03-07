#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i,j,n;
	for(i=1; i<=10; i++)
		{
//			cout<<setw(10);
			for(int x=10-i; x>0; x--)
			{
				cout<<" ";
			}
			for(j=1; j<=i; j++)
				{
					cout<<"* ";
				}
			cout<<endl;
		}
	for(i=9; i>=1; i--)
		{
	//		cout<<setw(10);
			for(int x=9-i; x>0; x--)
				{
					cout<<"  ";
				}
			for(j=1; j<=i; j++)
				{
					cout<<"* ";
				}
				
			cout<<endl;
		}

return 0;
}

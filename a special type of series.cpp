#include<iostream>
#include<math.h>
using namespace std;
//int pow(int a,);
int fac(int c)
{
	int fact=1;
	for(int i=c; i>=1; i--)
		{
			fact=fact*i;
		}
	return (fact);
}
int main()
{
	 int i,n,f;
	double res=0;
	 
	cout<<"enter the number of terms ";cin>>n;
	if(n==1)
		cout<<"1";
	else
	{
		cout<<"enter a number for x ";cin>>f;
		int r= fac(f);
		
	
		for(; i<=n; i++)
			{
				res= r+i/pow(n,i);
				r=r+1;
			}
		cout<<res;
		
				
	}
	return 0;
	
}




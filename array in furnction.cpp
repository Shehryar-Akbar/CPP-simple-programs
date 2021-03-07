#include <iostream>
using namespace std;


int main() {
	
	int n;
	cin>>n;
	int res=0;
	for (int i=1; i<=n; i++)
	{
		res+=i*i*i;
	}
	cout<<"result is "<<res;
   return 0;
}

#include<iostream>
#include<fstream>
using namespace std;
void _file(void);
int main()
{
	cout<<"If you want to creat a file ener 1";
	cout<<"\nIf you want to exit press 0";
	int n;
	cin>>n;
	if(n==1)
	{
		_file();
	}
	else if(n==0)
	{
		exit(0);
	}
}
void _file(void)
{
	fstream file;
	string name;
	cout<<"enter the name for the file that you want to creat ";
	cin>>name;
	file.open(name,ios::out);
}

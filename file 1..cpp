#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	fstream ali;
	string name;
	cout<<"ener the name for file ";
	cin>>name;
	ali.open(name,ios::out);
	if (!ali.open())
	{
		cout<<"file is not opend\n";
	}
	else
	{
		cout<<"file is open\n";
	}
	string name2;
	cin>>name2;
	file<<name2;
	ali.close();
}

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct stu
{
	string name;
	float gpa[3];
}s;
int main()
{
	cout<<"name: ";
	cin>>s.name;
	for(int i=0; i<3; i++)
	{
		cout<<"enter the gpa of the "<<i+1<<" semester ";
		cin>>s.gpa[i];
		cout<<endl;
	}
	cout<<s.name;
	for(int i=0; i<3; i++)
	{
		cout<<endl<<s.gpa[i];
	}
	
	
}


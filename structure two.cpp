#include<iostream>
using namespace std;
struct gur
{
	string name;
	int phone;
	string add;
};
struct stud
{
	string n;
	gur g;
};
int main()
{
	stud s1;
	cout<<"enter the name of the student ";
	cin>>s1.n;
	cout<<"\nenter the name of the gaurdian ";
	cin>>s1.g.name;
	cout<<"\nenter the phone num ";
	cin>>s1.g.phone;
	cout<<"\nenter the address of the gaurdian ";
	cin>>s1.g.add;
}

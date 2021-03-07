#include<iostream>
#include<string>
using namespace std;

struct address{
	int house;
	int street;
	string city;
};
struct employee{
	string name;
	string post;
	int pay;
	address addr;
}emp;
int main()
{	
	cout<<"employee name: ";
	cin>>emp.name;
	cout<<endl<<"post: ";
	cin>>emp.post;
	cout<<endl<<"slry: ";
	cin>>emp.pay;
	cout<<endl<<"house no: ";
	cin>>emp.addr.house;
	cout<<endl<<"street no: ";
	cin>>emp.addr.street;
	cout<<endl<<"city: ";
	cin>>emp.addr.city;
}	


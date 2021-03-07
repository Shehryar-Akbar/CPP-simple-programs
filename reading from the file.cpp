#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
	fstream file;
	file.open("khan.txt",ios::in);
	if(file.is_open())
	{
		cout<<"the file is successfully opend"<<endl;
	}
	else
	{
		cout<<"file is not opend";
	}
	string str;
	while(!file.eof())
	{
		getline(file,str);
		cout<<str<<endl;
	}
	return 0;
}

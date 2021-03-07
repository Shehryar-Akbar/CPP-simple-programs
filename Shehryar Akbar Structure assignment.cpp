#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
struct book
{
	string name;
	string author;
	int publish;
	int page;
	int price;
};
int main()
{
	book b[3];
	for(int i=0;i<3;i++)
	{
		cout<<"Enter the details of the "<<i+1<<" book";cout<<endl;
		cout<<"enter the name of the book ";
		cin>>b[i].name;
		cout<<endl;
		cout<<"enter the name of the author ";
		cin>>b[i].author;
		cout<<endl;
		cout<<"enter the year in which it was published ";
		cin>>b[i].publish;
		cout<<endl;
		cout<<"how many pages are there in the book ";
		cin>>b[i].page;
		cout<<endl;
		cout<<"enter the price of the book ";
		cin>>b[i].price;
		cout<<endl;
		system("cls");
	}
	cout<<"press enter to show you all the data of the books";
	getch();	
	system("cls");
	for(int i=0; i<3; i++)
	{
		cout<<endl<<"==============================\n";
		cout<<"Name: "<<b[i].name;
		cout<<endl<<"Author: "<<b[i].author;
		cout<<endl<<"P.B date: "<<b[i].publish;
		cout<<endl<<"Pages: "<<b[i].page;
		cout<<endl<<"Price: "<<b[i].price;
		cout<<endl;
		cout<<"==============================";
		cout<<endl;
	}
}

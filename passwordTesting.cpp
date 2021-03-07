#include<iostream>
#include<windows.h>
#include<string>
#include<iomanip>
#include<stdlib.h>
#include<conio.h>
#include<typeinfo>
using namespace std;
int main()
{
	char pswrd2[4];
    	int i=0;
    	while((pswrd2[i]=getch())!='\r')
    		{
			  	cout<<"*";
		    	i++;
		    }
		    string str = pswrd2;
		    cout<<typeid(pswrd2).name<<endl;
		    cout<<"First value: \n"<<pswrd2;
}

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str1[]="I LOVE COMPUTER SCIENCE";
	cout<<"I love Computer Science";
	cout<<"\nThe number of characters in the above statement is/are "<<strlen(str1);
	char str2[strlen(str1)];
	for(int i=0;i<strlen(str1);i++)
		{
			str2[i]=tolower(str1[i]);;
		}
		cout<<"\nthe lower case version of the above statement is "<<endl;
		cout<<str2;
}

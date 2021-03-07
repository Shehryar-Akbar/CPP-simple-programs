#include<iostream>
using namespace std;
int main()
{
	int c=2;
	int *p;
	int d=3;
	int *p1;
	p=&c;
	p1=&d;
	int *p3;
	p3=p/p1;
	cout<<p3;
}

#include<iostream>
using namespace std;
#define pi 3.14
float area(float r)
{
	float A = pi*r*r;
	return (A);
}
float cir(float r)
{
	float C= 2*pi*r;
	return (C);
}
int main(){
	float r;
	cout<<"enter the redius of the circle ";
	cin>>r;
	float res1=area(r);
	float res2=cir(r);
	cout<<"the area of the circle is "<<res1;cout<<endl;
	cout<<"the circumference of the circle is "<<res2;
	return 0;
}

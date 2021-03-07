#include<iostream>
using namespace std;
int max(int a,int  b,int c){

	if(a>b && a>c)
	return (a);
	if(b>a && b>c)
	return (b);
	if(c>a && c>b)
	return (c);
}
int man(int a,int  b,int c){
	
	if(a<b && a<c)
	return (a);
	if(b<a && b<c)
	return (b);
	if(c<a && c<b)
	return (c);
}
int main(){
	
	int x,y,z;
	cout<<"Enter any three numbers  \n";
	cin>>x>>y>>z;
	int r1=max(x,y,z);
	int r2=man(x,y,z);
	cout<<"the maximum number is "<<r1<<endl
	<<"the manimum number is "<<r2;
	return 0;
}

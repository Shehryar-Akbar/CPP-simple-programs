#include<iostream>
using namespace std;
float power(int x,int z)
{
    float res=1;
    for(int i=1; i<=z; i++)
            res=res*x; 
    return (res);
}
float fact(int x)
{
    float fac=1;
    for(int i=x; i>=1; i--)
        fac=fac*i;
    return (fac);
}
int main()
{    
    float x=3,y=3;
    float res=0;
    
    
    // cout<<"Enter the number of terms ";
    // cin>>x;
    // if(x>1)
    // {
        // cout<<"\nEnter the value for x ";
        // cin>>y;
        
        for(int i=2;i<=x; i++)
        {
            float r2=power(y,i);
            float r1=fact(y);
            res=res+(r1/r2);
            cout<<"ist  "<<res<<endl;
           
        }
        cout<<"the resulst is "<<res+1;
    // }
    // else if(x>0 || x<=1)
    // {
    //     cout<<1;
    // }
    return 0;
}






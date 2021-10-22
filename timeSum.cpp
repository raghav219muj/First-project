#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int h1,h2,m1,m2,s1,s2,a,b,c,d;
    
    cout<<"Enter first time in hours"<<endl;
    cin>>h1;
    cout<<"Enter first time in minutes"<<endl;
    cin>>m1;
    cout<<"Enter first time in seaconds"<<endl;
    cin>>s1;
    cout<<"Enter time2 time in hour"<<endl;
    cin>>h2;
    cout<<"Enter time2 time in minutes"<<endl;
    cin>>m2;
    cout<<"Enter time2 time in seconds"<<endl;
    cin>>s2;
    a=(s1+s2)/60;
    b=h1+h2+(m1+m2+a)/60;
    c=(m1+m2+a)%60;
    d=(s1+s2)%60;
    cout<<"Total time Hours: "<<b<<endl;
    cout<<"Total time minutes: "<<c<<endl;
    cout<<"Total time in seconds: "<<d<<endl;
    return 0;
}
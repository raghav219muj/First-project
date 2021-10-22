#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    cout<<"Enter third number"<<endl;
    cin>>c;
    d=(a>b)?a:b;
    e=(d>c)?d:c;
    cout<<"Largest number is: "<<e;
    return 0;
}
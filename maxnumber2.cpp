#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    cout<<"Enter thrid number"<<endl;
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"Largest number "<<a<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"LArgest number "<<b<<endl;
    }
    else
    {
        cout<<"Largest number "<<c<<endl;
    }
    return 0;
}
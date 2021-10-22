#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,d,x;
    cout<<"Enter values of 'a' "<<endl;
    cin>>a;
    cout<<"Enter value of 'b' "<<endl;
    cin>>b;
    cout<<"Enter value of 'c' "<<endl;
    cin>>c;
    d=b*b-(4*a*c);
    if(d>0)
    {
        cout<<"Equation has two roots "<<endl;
        x=(-b+(sqrt(b*b-(4*a*c))))/2*a;
        cout<<"First root "<<x<<endl;
        x=(-b-(sqrt(b*b-(4*a*c))))/2*a;
        cout<<"Second root "<<x<<endl;
    }
    else if(d==0)
    {
        cout<<"Equation has only one root"<<endl;
        x=(-b+(sqrt(b*b-(4*a*c))))/2*a;
        cout<<"Root of equation"<<endl;
    }
    else if(d<0)
    {
        cout<<"Equation has imaginary roots or roots do not exist "<<endl;
    }
    return 0;
}
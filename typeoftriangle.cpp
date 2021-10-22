#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter first side "<<endl;
    cin>>a;
    cout<<"Enter second side "<<endl;
    cin>>b;
    cout<<"Enter third side "<<endl;
    cin>>c;
    if(a+b>c && b+c>a && c+a>b)
    {
        cout<<"Triangle will form "<<endl;
    if(a==b && b==c && c==a)
    {
        cout<<"Equilateral triangle "<<endl;
    }
    else if(a==b || b==c || c==a)
    {
        cout<<"Isosceles triangle "<<endl;
    }
    else
    {
        cout<<"Scalene triangle "<<endl;
    }
    }
    else
    {
        cout<<"Triangle will not form "<<endl;
    }
    return 0;
}
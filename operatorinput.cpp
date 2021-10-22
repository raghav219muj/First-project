#include<iostream>
using namespace std;
int main()
{
    int a,b,ans;
    char o;
    cout<<"Enter first number "<<endl;
    cin>>a;
    cout<<"Enter second number "<<endl;
    cin>>b;
    cout<<"Enter a mathematical operator "<<endl;
    cin>>o;
    if(o=='+')
    {
        cout<<"Addition "<<a+b<<endl;
    }
    else if(o=='-')
    {
        cout<<"Difference "<<a-b<<endl;
    }
    else if(o=='*')
    {
        cout<<"Product "<<a*b<<endl;
    }
    else if(o=='/')
    {
        cout<<"Division "<<a/b<<endl;
    }
    else
    {
        cout<<"::::Invalid entry::::"<<endl;
    }
    return 0;
}
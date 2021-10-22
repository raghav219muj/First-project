#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter first number "<<endl;
    cin>>a;
    cout<<"Enter second number "<<endl;
    cin>>b;
    cout<<"Enter third number "<<endl;
    cin>>c;
    cout<<"Numbers in acending order "<<endl;
    if (a<b)
    {
        if(a<c)
        {
            if(b<c)
            {
                cout<<a<<endl<<b<<endl<<c<<endl;
            }
            else
            {
                cout<<a<<endl<<c<<endl<<b<<endl;
            }
        }
        else
        cout<<c<<endl<<a<<endl<<b;
    }
    else
    {
        if(b<c)
        {
            if(c<a)
            {
                cout<<b<<endl<<c<<endl<<a<<endl;
            }
            else
            {
                cout<<b<<endl<<a<<endl<<c;
            }
        }
        else
        {
            cout<<c<<endl<<b<<endl<<a<<endl;
        }
    }
    
    return 0;
}
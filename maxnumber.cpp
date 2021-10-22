#include<iostream>
using namespace std;
int main()
{

    int a,b,c;

    cout<<"Enter three diffrent numbers \n";

    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<"Maximum number is "<<a<<"\n";
        }
        else
        cout<<"Maximum number is "<<c<<"\n";
    }
    else
    {
        if(b>c)
        {
            cout<<"Maximum number is "<<b<<"\n";
        }
        else
        {
            cout<<"Maximum number is "<<c<<"\n";
        }

    }
    return 0;
    
}
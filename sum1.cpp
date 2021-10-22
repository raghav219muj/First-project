#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0;
    cout<<"Enter a number"<<endl;
    cin>>a;
    for(b=1;b<=a;b++)
    {
        c=c+b;
    }
    cout<<"Sum "<<c<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a number"<<endl;
    cin>>a;
    for(b=1;b<=10;b++)
    {
        cout<<a<<" * "<<b<<" = "<<a*b<<endl;
    }
    return 0;
}
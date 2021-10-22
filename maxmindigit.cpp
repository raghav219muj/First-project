#include<iostream>
using namespace std;
int main()
{
    int a,digit,diff,sum;
    cout<<"Enter any number"<<endl;
    cin>>a;
    int mx=0;
    int mn=a%10;
    while(a>0)
    {
        digit=a%10;
        if(mx<digit)
        {
            mx=digit;
        }
        if(mn>digit)
        {
            mn=digit;
        }
        a=a/10;
    }
    diff=mx-mn;
    sum=mx+mn;
    cout<<"Sum of lagest and smallest digits: "<<sum<<endl;
    cout<<"Difference of largest and smallest digits: "<<diff<<endl;
    return 0;
}
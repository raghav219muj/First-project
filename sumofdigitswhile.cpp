#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,digit;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    cout<<"Sum of digits "<<sum<<endl;
    return 0;
}
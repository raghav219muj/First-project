#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,digit;
    cout<<"Enter a number "<<endl;
    cin>>n;
    while(n>0)
    {
        digit=n%10;
        sum=(sum*10)+digit;
        n=n/10;
    }
    cout<<"Number in reverse order: "<<sum<<endl;
    return 0;
}
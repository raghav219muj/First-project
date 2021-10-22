#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,sum=0,nn,digit;
    cout<<"Enter a number "<<endl;
    cin>>n;
    nn=n;
    while(n>0)
    {
        digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;
    }
    cout<<sum<<endl;
    if(nn==sum)
    {
        cout<<"It is a armstrong number "<<endl;
    }
    else
    {
        cout<<"It is not armstrong number "<<endl;
    }
    return 0;
}
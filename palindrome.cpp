#include<iostream>
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
        sum=(sum*10)+digit;
        n=n/10;
    }
    if(nn==sum)
    {
        cout<<"It is a palindrome number "<<endl;
    }
    else
    {
        cout<<"It is not a palindrome number "<<endl;
    }
    return 0;
}
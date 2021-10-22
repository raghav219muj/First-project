#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0;
    cout<<"Enter any number"<<endl;
    cin>>a;
    for(b=2;b<a;b++)
    {
        if(a%b==0)
        {
            c=c+1;
        }
    }
    if(c>=1)
    {
        cout<<"It is not a prime number "<<endl;
    }
    else
    {
        cout<<"It is a prime number "<<endl;
    }
    return 0;
}
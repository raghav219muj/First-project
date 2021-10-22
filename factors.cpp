#include<iostream>
using namespace std;
int main()
{
    int a,b,i,count=0;
    cout<<"Enter a number "<<endl;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
            cout<<"\n"<<i<<endl;
        }
    }
    cout<<"Number of factors = "<<count<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a number to check if it is buzz number or not"<<endl;
    cin>>a;
    if(a%10==7 || a%7==0)
    {
        cout<<"The number is buzz number "<<endl;
    }
    else
    {
        cout<<"The number is not buzz number "<<endl;
    }
    return 0;
}
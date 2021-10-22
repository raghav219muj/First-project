#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"Enter a year "<<endl;
    cin>>y;
    if(y%4==0 && y%100!=0 || y%400==0)
    {
        cout<<"Leap year "<<endl;
    }
    else
    {
        cout<<"Not leap year "<<endl;
    }
    return 0;
}
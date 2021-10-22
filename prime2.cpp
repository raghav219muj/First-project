#include<iostream>

using namespace std;

int main()
{
    int num,a,b;
    cout<<"Enter a number to check if it is prime \n";

    cin>>num;

    for(a=2;a<num;a++)
    {
        if(num%a==0)
        {
            cout<<"NOT PRIME";
            break;
        }
    }
    if(a==num)
    {
        cout<<"PRIME";
    }
    return 0;

}
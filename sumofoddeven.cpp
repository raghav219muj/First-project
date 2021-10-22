#include<iostream>
using namespace std;
int main()
{
    int n,sumeven=0,sumodd=0,digit;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while(n>0)
    {
        digit=n%10;
        if(digit%2==0)
        {
            sumeven=sumeven+digit;
        }
        else
        {
            sumodd=sumodd+digit;
        }
        n=n/10;
    }
    cout<<"Sum of even digits "<<sumeven<<endl;
    cout<<"Sum of odd digits "<<sumodd<<endl;
    return 0;
}
#include<iostream>

using namespace std;

int main()
{
    int num,counter=0;
    cout<<"Enter a number to check if it is prime or not \n";
    cin>>num;
    for(int x=1;x<=num;x++)
    {
        if(num%x==0)
        counter=counter+1;
    }
    if(counter==2)
    {
        cout<<"Number entered is a PRIME NUMBER";
    }
    else
    {
        cout<<"Number entered is NOT PRIME NUMBER";
    }

}
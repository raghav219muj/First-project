#include<iostream>
using namespace std;
int main()
{
    int a,i,count=0;
    do
    {
        count=0;
        cout<<"Enter a number "<<endl;
        cin>>a;
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                count=count+1;
            }
        }
        if(count>0)
        {
            cout<<"The number entered is not a PRIME NUMBER "<<endl<<"Try again "<<endl;
        }
        else
        {
            cout<<"The entered number is PRIME NUMBER"<<endl<<"Congratulations"<<endl;
        }
    }while(count!=0);
    return 0;
}
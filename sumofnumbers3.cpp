#include<iostream>
using namespace std;
int main()
{
    int a,sum1=0,sum2=0,sum3=0;
    do
    {
        cout<<"Enter any number"<<endl<<"Enter 0 to terminate "<<endl;
        cin>>a;
        if(a<0)
        {
            sum1=sum1+a;
        }
        else
        {
            if(a%2==0)
            {
               sum2=sum2+a; 
            }
            else
            {
                sum3=sum3+a;
            }
        }
    }while(a!=0);
    cout<<"Sum of negative numbers: "<<sum1<<endl;
    cout<<"Sum of positive even numbers: "<<sum2<<endl;
    cout<<"Sum of positve odd numbers: "<<sum3<<endl;
    return 0;
}
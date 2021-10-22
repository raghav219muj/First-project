#include<iostream>
using namespace std;
int main()
{
    int a,n,i,f=1,digit,sum=0;
    do
    {
        cout<<"1. Enter 1 to find factorial of a number"<<endl<<"2. Enter 2 to find reverse of number "<<endl<<"3. Enter 3 to find sum of digits of a number "<<endl<<"4. EXIT";
        cin>>a;
        switch(a)
        {
            case 1:
            cout<<"Enter a number"<<endl;
            cin>>n;
            f=1;
            for(i=1;i<=n;i++)
            {
                f=f*i;
            }
            cout<<"Factorial of "<<n<<" = "<<f<<endl;
            break;
            case 2:
            cout<<"Enter  a number to find its reverse order "<<endl;
            cin>>n;
            sum=0;
            while(n>0)
            {
                digit=n%10;
                sum=(sum*10)+digit;
                n=n/10;
            }
            cout<<"The number in reverse order: "<<sum<<endl;
            break;
            case 3:
            cout<<"Enter a number to  find the sum of its digits "<<endl;
            cin>>n;
            sum=0;
            while(n>0)
            {
                digit=n%10;
                sum=sum+digit;
                n=n/10;
            }
            cout<<"Sum of digits = "<<sum<<endl;
            break;
            case 4:
            cout<<"Thank you!!"<<endl;
            break;
            default:
            cout<<"Invalid choice"<<endl;
        }
    }while(a!=4);
    return 0;
}
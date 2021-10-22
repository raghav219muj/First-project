#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a number to check if it is BUZZ number or NOT"<<endl;
    cin>>a;
    b=a%10;
    (b==7 || a%7==0)?cout<<"It is a BUZZ number":cout<<"It is NOT a BUZZ number";
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three sides of triangle"<<endl;
    cin>>a>>b>>c;
    ((a+b)>c && (b+c)>a && (c+a)>b)?cout<<"Triangle can be formed":cout<<"Triangle cannot be formed";
    return 0;
}
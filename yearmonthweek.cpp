#include<iostream>
using namespace std;
int main()
{
    int d,y,m,w,a,b,c,e;
    cout<<"Enter number of days"<<endl;
    cin>>d;
    y=d/365;
    a=d%365;
    m=a/30;
    b=m%30;
    w=b/7;
    c=w%7;
    e=c/7;
    cout<<"  No. of years : "<<y<<"  No. of months : "<<m<<"  No. of weeks : "<<w<<"  No. of days : "<<e;
    return 0;
}
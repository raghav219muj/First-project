#include<iostream>
using namespace std;
int main()
{
    int a,n,c=-1,d=1,e;
    cout<<"Enter any number "<<endl;
    cin>>n;
    for(a=1;a<=n;a++)
    {
        e=c+d;
        cout<<e<<", ";
        c=d;
        d=e;
    }
    return 0;
}
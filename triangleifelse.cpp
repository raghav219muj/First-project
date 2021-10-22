#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter three sides of triangle "<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b)
    {
        cout<<"Triangle will form "<<endl;
    }
    else
    {
        cout<<"Triangle will not form "<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int i,j,a=5;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<a;
        }
        a=a-1;
        cout<<""<<endl;
    }
}
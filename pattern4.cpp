#include<iostream>
using namespace std;
int main()
{
    int i,j,a=5;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            cout<<j;
        }
        cout<<""<<endl;
    }
}
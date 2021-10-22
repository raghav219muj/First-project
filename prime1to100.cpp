#include<iostream>
using namespace std;
int main()
{
    int i,j,c=0;
    for(i=1;i<=100;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c=c+1;
        }
        if(c==2)
        cout<<i<<endl;
    }

    return 0;
}
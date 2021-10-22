#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter a charecter to check if it is  an alphabet or not "<<endl;
    cin>>a;
    if(a>='A' && a<='Z' || a>='a' && a<='z')
    {
        cout<<"Entered charecter is alphabet "<<endl;
    }
    else{
        cout<<"Entered charecter is not an alphabet "<<endl;
    }
    return 0;
}
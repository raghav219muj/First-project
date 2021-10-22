#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter 1 for square"<<endl<<"Enter 2 for rectangle"<<endl<<"Enter 3 for triangle"<<endl<<"Enter 4 for circle"<<endl;
    cin>>a;
    switch(a)
    {
        case 1:
        cout<<"Enter side of square"<<endl;
        cin>>b;
        c=b*b;cout<<"Area of square "<<c;
        break;
        case 2:
        cout<<"Enter lenght of rectangle"<<endl;
        cin>>b;
        cout<<"Enter breadth of rectangle"<<endl;
        cin>>c;
        d=b*c;
        cout<<"Area of rectangle "<<d;
        break;
        case 3:
        cout<<"Enter height of triangle"<<endl;
        cin>>b;
        cout<<"Enter lenght of base base of the triangle"<<endl;
        cin>>c;
        d=0.5*c*b;
        cout<<"Area of triangle "<<d<<endl;
        break;
        case 4:
        cout<<"Enter radius of circle "<<endl;
        cin>>b;
        c=3.14*2*b*b;
        cout<<"Area of circle "<<c<<endl;
        break;
        default:
        cout<<"INVALID CHOICE"<<endl;
    }
    return 0;
}
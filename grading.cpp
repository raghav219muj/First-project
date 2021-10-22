#include<iostream>
using namespace std;
int main()
{
    int math,phy,chem,eng,hindi,total,percent;
    cout<<"Enter marks in maths "<<endl;
    cin>>math;
    cout<<"Enter marks in physics "<<endl;
    cin>>phy;
    cout<<"Enter marks in chemistry "<<endl;
    cin>>chem;
    cout<<"Enter marks in english "<<endl;
    cin>>eng;
    cout<<"Enter marks in hindi "<<endl;
    cin>>hindi;
    total=math+phy+chem+eng+hindi;
    percent=total/5;
    if(math<50 || phy<50 || chem<50 || eng<50 || hindi<50)
    {
        cout<<"FAIL"<<endl;
    }
    else
    {
        cout<<"Percentage obtained "<<percent<<endl;
    if(percent>=80)
    {
        cout<<"A"<<endl;
    }
    else if(percent<80 && percent>=70)
    cout<<"B"<<endl;
    else if(percent<70 && percent>=60)
    cout<<"C"<<endl;
    else if (percent<60 && percent>=50)
    cout<<"D"<<endl;
    else if(percent<50)
    cout<<"FAIL"<<endl;
    else
    cout<<"Result invalid"<<endl;
    }
    return 0;
}
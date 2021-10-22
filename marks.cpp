#include<iostream>
using namespace std;
int main()
{
    int maths,phy,chem,eng,hin,total,percent;
    cout<<"Enter marks in five subjects "<<endl;
    cin>>maths>>phy>>chem>>eng>>hin;
    total=maths+phy+chem+eng+hin;
    cout<<"Total marks "<<total<<endl;
    percent=total/5;
    cout<<"Percentage obtained "<<percent<<endl;
    if(maths>=40 && phy>=40 && chem>=40 && eng>=40 && hin>=40)
    {
        cout<<"Student has passed the exam "<<endl;
    }
    else
    {
        cout<<"Student has failed the exam "<<endl;
    }
    return 0;
}
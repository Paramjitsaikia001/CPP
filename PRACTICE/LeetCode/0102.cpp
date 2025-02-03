#include<iostream>
using namespace std;
struct employee{
    int empno;
    char ename[20];
    float basic,hra,da;
    float calculate(){
        return basic+hra+da;
    }
    void getdata(){
        cout<<"enter the employee no: ";
        cin>>empno;
        cout<<"enter the e name : ";
        cin>>ename;
        cout<<"enter the basic: ";
        cin>>basic;
        cout<<"enter the hra: ";
        cin>>hra;
        cout<<"enter the da: ";
        cin>>da;
    }
    void dispdata(){
        cout<<"empno : "<<empno<<endl;
        cout<<"ename : "<<ename<<endl;
        cout<<"the net salary is : "<<calculate()<<endl;

    }
};
int main(){
    employee e;
    e.getdata();
    cout<<"employee details: \n";
    e.dispdata();
    return 0;
}
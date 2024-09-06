#include<iostream>
using namespace std;
int main(){
    struct student{
        string name;
        int roll_no;
        string department;

    };

    student s1;
    cout<<"\n\nenter details of the student:1\n";
    cout<<"name: ";
    cin>>s1.name;
    cout<<"roll no: ";
    cin>>s1.roll_no;
    cout<<"department: ";
    cin>>s1.department;

    cout<<"the details of the student:1\n";
    cout<<"\nname: "<<s1.name;
cout<<"\nroll no: "<<s1.roll_no;
cout<<"\ndepartment: "<<s1.department;

return 0;
}
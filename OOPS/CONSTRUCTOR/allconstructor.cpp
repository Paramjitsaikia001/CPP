#include <iostream>
using namespace std;
class student
{
    public:
    int roll;
    string name;

    student(int x,string n){
        roll=x;
        name=n;
    }
    void display(){
        cout<<"roll: "<<roll<<endl;
        cout<<"name: "<<name;
    }

    student( student &obj){
        roll=obj.roll;
        name=obj.name;
    }
    //  void display2(){
    //     cout<<"\n\nroll: "<<roll<<endl;
    //     cout<<"name: "<<name;
    // }
};
int main(){
int roll_no=90;
string student_name="Paramjit";

student obj(roll_no,student_name);
obj.display();
student obj2(obj);
cout<<"\n";
obj2.display();
return 0;

}

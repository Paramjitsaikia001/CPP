//constructor and destructor in c++

#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(){
        cout<<"this base constructor"<<endl;
    }
};
class student:public person{
    public:
    int roll_no;
    student(){
        cout<<"this is the derive constructor"<<endl;
    }
    void display(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"roll no: "<<roll_no<<endl;
    }
};
int main(){
    student s1;
    s1.name = "paramjit saikia";
    s1.age =23;
    s1.roll_no=42;
    return 0;

}

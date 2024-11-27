#include <iostream>
using namespace std;
class student
{
    string name;
    double *cgpaPTR;//declare a pointer

public:
    student(string name, double cgpa)
    {
        this->name = name;
        cgpaPTR = new double; //this is dynamic memory allocaiton
        *cgpaPTR = cgpa;
    }
    ~student(){
        cout<<"destructor called";
        delete cgpaPTR ; //we should do this for nor leak the memory
    }
    void display(){
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPTR<<endl;
    }
};
int main(){
student s1("paramjit",34);
s1.display();
return 0;
}
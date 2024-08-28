// Parameterized Constructor:A constructor that takes arguments to initialize the object with specific values.

#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int semester;

    student(string x, int y, int z)
    {
        name = x;
        roll = y;
        semester = z;
    }
    void display(){
        cout<<name<<"\n";
        cout<<roll<<"\n";
        cout<<semester<<" sem";
    }
};
int main(){
    string name;
    int roll;
    int semester;
    cout<<"enter name: ";
    cin>>name;

    cout<<"enter roll: ";
    cin>>roll;
    cout<<"enter semester: ";
    cin>>semester;
    student obj(name,roll,semester);
obj.display();
return 0;
}

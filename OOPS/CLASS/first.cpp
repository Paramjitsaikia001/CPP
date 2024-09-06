#include <iostream>
using namespace std;
class student
{
private:
    char name[10];
    int roll_no;

public:
void getinput(){
    cout<<"\nenter your name: ";
    cin>>name;
    cout<<"\nenter your roll no: ";
    cin>>roll_no;

}
void display(){
    cout<<"\nstudent name: "<<name<<endl;
    cout<<"\nstudent roll no: "<<roll_no<<endl;
}
};
int main(){
    student S[10];
    int n;
 cout<<"enter the no. of the student: ";
 cin>>n;
 for(int i=0;i<n;i++){
    cout<<"enter the details of student no "<<i+1;
    S[i].getinput();

 }
for(int i=0;i<n;i++){
cout<<"the details of the student no "<<i+1<<" is \n";
S[i].display();
}
 return 0;

}
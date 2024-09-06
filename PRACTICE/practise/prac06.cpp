#include<iostream>
using namespace std;
class detailOfEmployee{
    private:
    char Name[20];
    int salary;
    int duration;

    public:
    void getdetails(){
        cout<<"enter the name: ";
        cin>>Name;
        cout<<"enter the salary: ";
        cin>>salary;
        cout<<"enter the duration in the job in year: ";
        cin>>duration;
    }
    void displaydetails(){
        cout<<"EMPLOYEE DETAILS\n\n";
        cout<<"NAME: "<<Name;
        cout<<"\nSalary: "<<salary;
        cout<<"\nDuration: "<<duration<<" year";
    }
};
int main(){
   detailOfEmployee my_obj;
   my_obj.getdetails();
   my_obj.displaydetails();
   return 0; 
}
//concatenation in string

#include<iostream>
using namespace std;
int main(){
    //there are two method to concatenation of two string
     string firstName,lastName;
    cout<<"enter first name: ";
    cin>>firstName;
    cout<<"enter the Last name: ";
    cin>>lastName;

    //first method of concatenation
    string FullName=firstName + lastName;
    cout<<"the Full name is "<<FullName;
    //for space between them we can use " " or ' '
     FullName=firstName +" "+ lastName;
    cout<<"\nthe Full name is "<<FullName;

    //second method of concatenation usin function
    FullName=firstName.append(lastName);
    cout<<"\nusing function the full name is "<<FullName;

    return 0;
}
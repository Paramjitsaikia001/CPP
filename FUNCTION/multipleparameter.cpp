#include<iostream>
using namespace std;
void nameAge(string name,int age){
    cout<< name << " " << age <<"years old ";
}
int main(){
    string myname= "paramjit";
    int myage=19;
    nameAge(myname,myage);
    return 0;
}
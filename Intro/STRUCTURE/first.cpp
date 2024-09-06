#include<iostream>
#include<string>
using namespace std;
int main(){
    struct{
        string myname;
        int rollNo;
    }mystructure;

    mystructure.myname="paramjit saikia";
    mystructure.rollNo=34;

    cout<<"my name : "<<mystructure.myname;
    cout<<"\nmy roll : "<<mystructure.rollNo;
    return 0;
}
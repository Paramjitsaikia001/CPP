#include<iostream>
using namespace std;
int main(){
    string name="paramjit";
    string* ptr=&name;
    cout<<name<<"\n"<<ptr<<endl;
    return 0;
}
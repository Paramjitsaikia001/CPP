#include<iostream>
using namespace std;
void myfunction(string name="paramjit"){
    cout<<name;
}
int main(){
    string name="debo";
    myfunction(name);
    return 0;
}
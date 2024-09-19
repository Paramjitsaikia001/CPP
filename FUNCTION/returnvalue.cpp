#include<iostream>
using namespace std;
string namefun(string name){
    return name;
}
int agefun(int age){
    return age;
}
int main(){
    string name="paramjit";
    int age=23;
    cout<<namefun(name)<<" "<<agefun(age)<<" years old.";
    return 0;
}

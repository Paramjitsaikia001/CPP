//default constructor
#include<iostream>
using namespace std;
class myclass{
public:
    int value;
    myclass(){
        value=4;
    }

};
int main(){
    myclass obj;
    cout<<"the value is: "<<obj.value;
    return 0;
}
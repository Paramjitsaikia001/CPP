#include<iostream>
using namespace std;
class sum{
    public:
    int x,y;
    sum(){
        cout<<"it define the two numbers"<<endl;
    }
};
int main(){
    sum obj1;
    obj1.x=9;
    obj1.y=10;
cout<<obj1.x<<endl;
cout<<obj1.y<<endl;
cout<<obj1.x+obj1.y<<endl;
return 0;
}
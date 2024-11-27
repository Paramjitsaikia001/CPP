//polymorphosim in pointer and reference
#include <iostream>
using namespace std;
class animal{
    public:
   virtual void display(){
        cout<<"this is base class"<<endl;
    }
};
class dog : public animal{
    public:
    void display(){
        cout<<"this is derive class"<<endl;
    }
};
int main(){
   animal* b; dog d; b = &d; b->display();d.display(); animal c;c.display();
}
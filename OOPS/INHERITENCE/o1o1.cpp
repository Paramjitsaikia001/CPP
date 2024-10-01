//inheritance property of oop in c++

#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
    cout<<"animals eat food.";
    }
};


//inherit class of animal
class dog:public animal{
      public:
    void food(){
    cout<<"dog eat meat.";
    }
};

int main(){
    animal A1;
    A1.eat();
    dog D1;
    D1.eat();
    D1.food();
    return 0;
}

#include<iostream>
using namespace std;
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }
};
int main(){
    Shape S1;
    S1.draw();
    Rectangle r1;
    r1.draw();
    Circle c1;
    c1.draw();
    return 0;
}
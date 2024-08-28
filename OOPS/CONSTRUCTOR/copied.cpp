#include<iostream>
using namespace std;
class MyClass {
public:
    int value;
    
    // Parameterized Constructor
    MyClass(int v) {
        value = v;
    }
    
    // Copy Constructor
    MyClass(const MyClass &obj) {
        value = obj.value;
    }
};

int main() {
    MyClass obj1(20);  // Parameterized constructor is called
    MyClass obj2(obj1);  // Copy constructor is called
    cout << "Value: " << obj2.value << endl;  // Outputs: Value: 20
    return 0;
}

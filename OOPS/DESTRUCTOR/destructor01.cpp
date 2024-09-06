#include <iostream>
using namespace std;

class MyClass {
    int* data;
public:
    MyClass(int size) {
        data = new int[size];  // Allocate memory dynamically
        cout << "Memory allocated." << endl;
    }

    ~MyClass() {  // User-defined destructor
        delete[] data;  // Free the allocated memory
        cout << "Memory freed." << endl;
    }
};

int main() {
    MyClass obj(10);  // Memory is allocated
    // Memory is freed when obj goes out of scope
    return 0;
}

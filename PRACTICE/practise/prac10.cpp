#include <iostream>
using namespace std;

class Test {
private:
    int x;
    int y;

public:
    Test(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }

    Test& set(int a,int b) {
        x = a;
        y=b;
        return *this;
    }

    // Test& setY(int b) {
    //     y = b;
    //     return *this;
    // }

    void print() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Test obj1(5, 5);
 obj1.print();
    // Chained function calls. All calls modify the same object
    obj1.set(10,20);
    obj1.print();

    return 0;
}

#include <iostream>
using namespace std;
class value
{
public:
    int y;
    value(int y)
    {
        this->y = y;
    }
    value operator-()
    {
        value obj(y);
        y--;
        return obj;
    }
    void display()
    {
        cout << y << endl;
    }
    friend value operator+(const value &obj1, const value &obj2);
};
value operator+(const value &obj1, const value &obj2)
{
    return value(obj1.y + obj2.y);
}
int main()
{
    value obj1(6);
    value obj2(3);
    value obj3 = obj1 + obj2;
    obj3.display();
    -obj1;
    -obj1;
    obj1.display();
    return 0;
}